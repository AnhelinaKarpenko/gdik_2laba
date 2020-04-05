#ifndef MAS_H
#define MAS_H

class mas
{
    int *arr;
    int size;
public:
    mas(int count);
    mas(const mas &obj);
    void output();
    void input();
    mas & association(mas&obj); //объединение
    mas & intersection(mas&obj); // пересечение
    mas & difference(mas&obj); // отнимание
    mas & equivalence (mas&obj1); //эквивалентность
    void status(); // проверка приналежности числа
    void inclusion (); // проверка включения подмножества
    ~mas();

};

#endif // MAS_H


