/*This program for to implement the constructor in c++
  1.It can decelare as same to class name
  2.By using constructor we can initillize the values at class level
  3.It can invoked by compiler automatically*/
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    int add();
    int sub();
    A();//here we can create the constructor
};

A::A()//here we can write the defination of constructor
{
    a=10;//here we can initillize the value to data members of class A
    b=20;
}

int A::add()
{
    cout<<"The addition="<<a+b<<"\n";
    return 0;
}
int A::sub()
{
    cout<<"The substraction="<<a-b;
    return 0;
}

int main()
{
    A obj;//here the constructor can invoked automatically
    obj.add();
    obj.sub();
    return 0;
}