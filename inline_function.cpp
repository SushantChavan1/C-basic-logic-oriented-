//This program for to implement the inline function in C++
//simple program. This is an example of impliceatly inline function
#include<iostream>
using namespace std;
class B;//Aduanced deceleration of class
class A
{
    public:
    void show()//defination of inline function 
    {
        cout<<"Simple Inline Function........\n";
    }
};
class B
{
  public:
  void show1();//deceleration of member function
};

inline void B::show1()//forcefully we make the inline function but code is little bit
{
    cout<<"This is an explicitly inline function.............";
}

int main()
{
    A obj;//This is object ceration of class A
    B object1;//object for class b
    obj.show();//Calling to inline function
    object1.show1();//calling to forcefully inline function
    return 0;
}

/*The inline function have a small code of segment beacuse of it does not pushed into 
 a system stack memory during the execution of program and there is no use of any looping 
 as well as it has a small code. This are some charactersticks of inline function*/

