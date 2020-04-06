#include <iostream>
#include "mas.h"
// изменяем текст 
using namespace std;

int main()
{
    setlocale(LC_ALL, " ");
    int num,num_A, num_B;

    cout<<"number of sets A: ";
    cin>>num_A;
    mas a(num_A);

    cout<<" A : ";
    a.input();

    cout<<" number of sets B : ";
    cin>>num_B;
    mas b(num_B);

    cout<<" B : ";
    b.input();
    do
    {
        cout<<endl;
        cout<<"1) the union of sets; 2) subtraction A/B; 3) subtraction B/A; "<<endl;
        cout<<"4) intersection of sets; 5) inclusion in the set A; 6) inclusion in the set B; "<<endl;
        cout<<"7) equivalence check; 8) inclusion of a number in a set A; 9) inclusion of a number in a set B; "<<endl;
        cout<<"10) exit; "<<endl;
        cout<<"enter number: ";
        cin>>num;
        if(num==1)
        {
              cout<<"A: "; a.output();
             cout<<"B: "; b.output();
             a.association(b);
             cout<<"----------------------------------------------------------------------"<<endl;

        }
        if(num==2)
        {
             cout<<"A: "; a.output();
              cout<<"B: "; b.output();
            a.difference(b);
            cout<<"----------------------------------------------------------------------"<<endl;

        }
        if(num==3)
        {
            cout<<"A: "; a.output();
            cout<<"B: "; b.output();
            b.difference(a);
            cout<<"----------------------------------------------------------------------"<<endl;

        }
        if(num==4)
        {
             cout<<"A: "; a.output();
             cout<<"B: "; b.output();
            b.output();
            a.intersection(b);
            cout<<"----------------------------------------------------------------------"<<endl;
        }
        if(num==5)
        {
             cout<<"A: "; a.output();
            a.inclusion();
            cout<<"----------------------------------------------------------------------"<<endl;

        }
        if(num==6)
        {
             cout<<"B: "; b.output();
            b.inclusion();
            cout<<"----------------------------------------------------------------------"<<endl;

        }
       if(num==7)
        {
             cout<<"A: "; a.output();
           cout<<"B: "; b.output();
            a.equivalence(b);
            cout<<"----------------------------------------------------------------------"<<endl;

        }
        if(num==8)
        {
             cout<<"A: "; a.output();
            a.status();
            cout<<"----------------------------------------------------------------------"<<endl;

        }

        if(num==9)
        {
             cout<<"B: "; b.output();
            b.status();
            cout<<"----------------------------------------------------------------------"<<endl;

        }

    } while(num!=10);
    return 0;
}
