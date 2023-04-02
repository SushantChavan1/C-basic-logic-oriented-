/*This program for to overloading the unary operator in cpp
1.++
2.--
3.!(logical not operator) by using normal member function*/ 
#include<iostream>
using namespace std;
class over{
    public:
    int a,b,c,d;
    void operator ++(){//defination of operator ++
        a=++a;//operation pre-increment
    }
    void operator --(){//defination of -- operator
        b=--b;//operation pre-decerement
    }
    void operator !(){//defination of -- operator
        c=!c;//operation logical not !
    }
    void operator -(){
        d=-d;
    }
    int putdata();
    int getdata();
};

int over::getdata(){
    cout<<"Enter the value of a=";
    cin>>a;
    cout<<endl<<"Enter the the value of b=";
    cin>>b;
    cout<<endl<<"Enter the value of c=";
    cin>>c;
    cout<<"Enter the value of d="<<endl;
    cin>>d;
    return 0;
}

int over::putdata(){
    cout<<"The value of a++="<<a<<endl;
    cout<<"The value of b--="<<b<<endl;
    cout<<"The value of c!="<<c;
    cout<<"The value of -d="<<d;
    return 0;
}

int main(){
    over obj;
    obj.getdata();
    ++obj;//calling operator by using object
    --obj;//calling operator by using object
    !obj;//calling operator by using object
    -obj;
    obj.putdata();
    return 0;
}