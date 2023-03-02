//This program for to pass the object as argument to the function
#include<iostream>
using namespace std;
class A
{
    int a,b;
    public://Here is an access specifire
    int add(A);//Here we can pass the class name as argument to the function
};
int A::add(A obj)//here we can create the object to class
{
    cout<<"Enter the two numbers to addition\n";
    cin>>obj.a>>obj.b;
    cout<<"The addition="<<obj.a+obj.b;
    return 0;
}
int main()
{
    A ob;//Here also we need to create an object of class for calling and passing argument
    ob.add(ob);
}