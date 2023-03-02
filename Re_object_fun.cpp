#include<iostream>
using namespace std;
class add
{
    public:
    int a,b,c;
    add Add(add,add);//Here we can pass the arguments as a class name as well as return type is class name
};
add add::Add(add obja,add objb)//defination of function passing object and returning object
{
    add obj3;
    obj3.c=obja.a+objb.b;
    return obj3; //Here we can return the object of class
}
int main()
{
    add e1,e2,e3;
    cout<<"Enter the two numbers\n";
    cin>>e1.a>>e2.b;
    e3=e3.Add(e1,e2);//we can passing actual object to function defination
    cout<<"The addition="<<e3.c;
    return 0;
}