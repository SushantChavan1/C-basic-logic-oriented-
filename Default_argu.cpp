//This program to implement the function has a default argument in cpp
#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    int add(int a=10,int b=20);//deceleration of member function with default argument
};

int A::add(int a,int b)//defination of member function
{
    cout<<"The addition="<<a+b;
    return 0;
}
int main()
{
    A obj;
    int x,y;
    cout<<"Enter the two numbers=\n";
    cin>>x>>y;
    obj.add(x,y);//here we can pass the arguments as well as we cannot pass argument it tooks the default arguments
    return 0;
}
/*The default argument means we can assing the value at the time of deceleration.
when we cannot pass any type of actual parameter to defination of member function
then it tooks the value at you decelare in decelaration.
when we pass the actual parameters to defination it can take and execute further.
*/