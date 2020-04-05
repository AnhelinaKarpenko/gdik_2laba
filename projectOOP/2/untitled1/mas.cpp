#include "iostream"
#include "mas.h"

using namespace std;

void mas::output()
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void mas::input()
{
    for (int i = 0; i <size; i++)
            {
                cin >>arr[i];
            }
}
mas&mas::association(mas &obj)
{
    int*temp=new int();

        int x = 0; int k = 0;

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < obj.size; j++)
            {
                if (arr[i] == obj.arr[j])
                    x++;
            }
            if (x == 0)
            {
                temp[k] = arr[i]; k++;
            }
            x = 0;
        }
        for (int j = 0; j < obj.size; j++)
        {
            temp[k] = obj.arr[j]; k++;
        }

        for (int i = k - 1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (temp[j] > temp[j + 1])
                {
                    int tmp = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = tmp;
                }
            }
        }

        cout << "C= ";
        for (int i = 0; i < k; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;
    return *this;
}
mas&mas::intersection(mas &obj)
{

     int*temp=new int(); int k = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < obj.size; j++)
        {
            if (arr[i] == obj.arr[j])
            {
                temp[k] = arr[i]; k++;
            }
        }
    }

    for (int i = k - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                int tmp = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = tmp;
            }
        }
    }

    cout << "C= ";
    for (int i = 0; i < k; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    return *this;
}
mas&mas::difference(mas &obj)
{
    int x = 0;

    int *temp=new int(); int k = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < obj.size; j++)
        {
            if (arr[i] == obj.arr[j])
                x++;
        }
        if (x == 0)
        {
            temp[k] = arr[i]; k++;
        }
        x = 0;
    }

    for (int i = k - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                int tmp = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = tmp;
            }
        }
    }

    cout << "C= ";
    for (int i = 0; i < k; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    return *this;
}
void mas::status()
{
    int num,counter=0;
    cout<<"Enter the number to check: ";
    cin>>num;
    for (int i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            counter++;
        }
    }
    if(counter!=0)
    { cout<<"belong"<<endl; }
    else
      cout<<"do not belong"<<endl;
}
void mas::inclusion()
{
   int *temp=new int();
    int num,counter=0;
    cout<<"enter the number of elements in the subset: ";
    cin>>num;
    cout<<"enter a subset to check: ";
    for(int i=0; i<num; i++)
    {
        cin>>temp[i];
    }
    for(int i=0; i<num;i++)
    {
        for(int j=0; j<size; j++)
        {
            if(temp[i]==arr[j])
            {
                counter++;
            }
        }
    }
    if (counter==num)
    {
        cout<<"a subset is included in set"<<endl;
    }
    else
    {
       cout<<"a subset is not a member of set"<<endl;
    }
}
mas&mas::equivalence(mas& obj1)
{
    if(size==obj1.size)
    {
        cout<<"equivalent "<<endl;
    }
    else
    {
        cout<<"not equivalent "<<endl;
    }
    return *this;
}
mas::mas(int count)
{
    if(count<65534)
    {
        size=count;
        arr=new int[size];
        for (int i=0; i<size; i++)
        {
            arr[i]=i;
        }
    }

}
mas::~mas()
{
    delete []arr;
}
mas::mas(const mas &obj)
{
    arr=new int[obj.size];
    for (int i=0;i<obj.size;i++)
    {
        arr[i]=obj.arr[i];
    }
}
