//The program for to implement the to pass class as a argument
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    int add(A);//here we can pass the class name as argument to the finction
};

int A::add(A obj)//here we can create the object of same class
{
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    cout<<"The addition="<<a+b;
    return 0;
}
int main()
{
    A obj1;
    obj1.add(obj1);//at the time of invoking the member function we can creat object of class and pass
    //the object as a actual parameter
    return 0;
}