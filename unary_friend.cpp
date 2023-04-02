//This is for function overloading by using friend function
#include<iostream>
using namespace std;

class A{
    public:
    int a,b,c,d;
    A(){//default constructor
        cout<<"Enter the value of a,b,c&d"<<endl;
        cin>>a>>b>>c>>d;
    }
    friend void operator-(A &ob){//This defination of friend function 
        ob.a=-ob.a;
    }
    friend void operator++(A &ob){//This defination of friend function 
        ob.b=++ob.b;
    }
    friend void operator--(A &ob){//This defination of friend function 
        ob.c=--ob.c;
    }
    friend void operator!(A &ob){//This defination of friend function 
        ob.d=!ob.d;
    }
    int put(){
        cout<<"The value of nigation a="<<a<<endl;
        cout<<"The value of ++b="<<b<<endl;
        cout<<"The value of --c="<<c<<endl;
        cout<<"The value of !d="<<d<<endl;
        return 0;
    }
};

int main(){
    A obj;
    -obj;//operator call
    ++obj;//operator call
    --obj;//operator call
    !obj;//operator call
    obj.put();
    return 0;
}