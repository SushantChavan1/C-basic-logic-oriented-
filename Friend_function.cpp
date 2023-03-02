//This program for to implement the friend function in c++ 
//by using friend function we can able to access the data of class which is private and proceted
//The friend function can took one argument as a class name 
#include<iostream>
using namespace std;
class A
{
  int a;//Here a is an private member of class A
  friend void show(A);  //deceleration of friend function we can decelare outside class by 
                        //using "friend" keyword
};
void show(A obj)//defination of friend function
{
    obj.a=1000;//We can able to access the private data of class A
    cout<<"The value of a="<<obj.a;
}
int main()
{
    A obje;
    show(obje);//In invoking it took parameter as a class object
    return 0;
}