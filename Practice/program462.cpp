#include<iostream>
using namespace std;

template<class T>

T Addition(T No1, T No2)
{
    T Ans ;
    Ans = No1+No2;
    return Ans;
}

int main()
{
    cout<<"Addition of Characters : "<<Addition('a','b')<<"\n";
    cout<<"Addition of Integer : "<<Addition(11,10)<<"\n";
    cout<<"Addition of Float : "<<Addition(90.76f,33.4f)<<"\n";
    cout<<"Addition of Double : "<<Addition(24.65421,67.345982)<<"\n";

    return 0;
}