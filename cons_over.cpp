//This program for constructor overrloading in c++
#include<iostream>
using namespace std;
class add
{
    int a,b,A,B;
    public:
    add()//default constructor
    {
        a=10;
        b=20;
    }
    add(int p,int q)//Parameterised constructor
    {
        a=p;
        b=q;
    }
    add(add & obj)//Copy constructor
    {
       A=obj.a;
       B=obj.b;
    }
    int sub();
    int multi();
    int addition();
};

int add::addition()
{
    cout<<"The addition performed by  Default constructor\n";
    cout<<"The addition="<<a+b<<endl;
    return 0;
}
int add::sub()
{
    cout<<"The substraction by parameterised constructor\n";
    cout<<"The subsctraction="<<a-b<<endl;
    return 0;
}
int add::multi()
{
    cout<<"The copy costructor\n";
    cout<<"The multi="<<A*B<<endl;
    return 0;
}

int main()
{
    add obj;//invoking default constructor
    obj.addition();
    add ob(10,40);//invoking to Parameterised constructor
    ob.sub();
    add obj1(ob);//invoking to copy constructor
    obj1.multi();
    return 0;
}