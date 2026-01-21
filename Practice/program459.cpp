#include<iostream>
using namespace std;


double Addition(double No1, double No2)
{
    double Ans ;
    Ans = No1+No2;
    return Ans;
}

int main()
{
    float i =0.0f, j=0.0f, Ret=0.0f;

    cout<<"Enter 1st Number : ";
    cin>>i;

    cout<<"Enter 2nd number";
    cin>>j;

    Ret = Addition(i,j);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}