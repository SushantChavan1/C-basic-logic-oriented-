//This program for function overloading in c++
#include<iostream>
using namespace std;
class A
{
    public:
int add(char a[16]);//same name but parameters
int add();
int add(int a,int b);
int add(float p,float q);
};
int A::add(char a[])
{
    cout<<"The character="<<a<<endl;
    return 0;
}

int A::add()
{
    int a,b;
     cout<<"Enter the two number"<<endl;
    cin>>a>>b;
    cout<<"The addition="<<a+b<<endl;
    return 0;
}

int A::add(int a,int b)
{
    return a+b;
}

int A::add(float p,float q)
{
    cout<<"The addition="<<p+q<<endl;
    return 0;
}

int main()
{
   
    int m,n,c;
    float a,b;
    char o[17];
    A o1,o2,o3,o4;
    cout<<"Enter the name"<<endl;
    cin>>o;
    o1.add(o);
    o2.add();
    cout<<"Enter the two number"<<endl;
    cin>>m>>n;
    c=o3.add(m,n);
    cout<<"THe add="<<c<<endl;
   cout<<"Enter the two number"<<endl;
    cin>>a>>b;
    o4.add(a,b);
    return 0;

}

/*some disadvantages of function overloading
  1.You cannot function overload with different return type it does not 
     matter but the  parameters are matters actuly
    eg.In above program I can take the same return type but the parameters 
    are diff. */