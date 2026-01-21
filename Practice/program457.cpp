#include<iostream>
using namespace std;


int Addition(int No1, int No2)
{
    int Ans ;
    Ans = No1+No2;
    return Ans;
}

int main()
{
    int i =0, j=0, Ret=0;

    cout<<"Enter 1st Number : ";
    cin>>i;

    cout<<"Enter 2nd number";
    cin>>j;

    Ret = Addition(i,j);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}