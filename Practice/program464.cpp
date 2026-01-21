#include<iostream>
using namespace std;


class Arithematic 
{
    public :
        int No1;
        int No2;

    Arithematic(int a, int b)
    {
        No1 = a;
        No2 = b;
    }

    int Addition()
    {
        int Ans;
        Ans = No1+No2;
        return Ans;
    }

};

int main()
{
    Arithematic *obj =  new Arithematic(10,11);

    cout<<"Addition is : "<<obj->Addition();

    delete obj;

    return 0;
}