//In this program we are going to implement, we can pass array as an object of class
#include<iostream>
using namespace std;
class A
{
    friend int show(A);//here we can decelare an simple friend function which can take one argument as class name
};

int show(A obj)//here we can write the defination of friend function
{
    cout<<"WELCOME\n";//here we can access the same data by multiple calls using array as object concept
    return 0;
}
int main()
{
    A  a[5];//here we can create the "array as object of class A"
    for(int i=0;i<5;i++)
    {
        show(a[i]);//here we can invoke the same data multiple of times by using array as object concept
    }
    return 0;
}
