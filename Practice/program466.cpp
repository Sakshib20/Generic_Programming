#include<iostream>
using namespace std;

template<class T>

class Arithematic 
{
    public :
        T No1;
        T No2;

    Arithematic(T a, T b)
    {
        No1 = a;
        No2 = b;
    }

    T Addition()
    {
        T Ans;
        Ans = No1+No2;
        return Ans;
    }


    T Substraction()
    {
        T Ans;
        Ans = No1-No2;
        return Ans;
    }

};

int main()
{
    Arithematic <int>obj(11,10);

    cout<<"Addition is : "<<obj.Addition()<<"\n";
    cout<<"Substraction is : "<<obj.Substraction()<<"\n";

    return 0;
}