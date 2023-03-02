//This program for to implement the static member function in simple way and its 
//syntaxes 
#include<iostream>
using namespace std;
class A
{
    static int a;//deceleration of static data member
    static int cunt;
    public:
    static int co();
    static int show();//deceleration of static member function
};
int A::cunt=0;
int A::a=100;//initillisition of static data member
int A::show()//defination of ststic member function outside main
{
    cunt++;
    cout<<"The value of ststic data member is="<<a<<"\n";
    return 0;
}
int A::co(){
    cout<<"The show function accessed "<<cunt<<" Times\n";
    return 0;
}
int main()
{
    A::show();//invoking by class name
    A ob;//Here we can create class object
    ob.show();//invoking by class object
    A::co();
    return 0;
}