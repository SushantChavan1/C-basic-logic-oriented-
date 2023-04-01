/*This program for unary operator overloading by using friend function
concept. This is demo program of unary operator overloading*/
#include<iostream>
using namespace std;
class A{
    public:
    int a;
    friend A get(A ob){
        cout<<"Enter the value of a";
        cin>>ob.a;
        return ob;
    }
    friend void put(A obj){
        cout<<"The value of a="<<obj.a;
    }
    friend A operator-(A & obj){//defination of unary operator overloading
            obj.a=-obj.a;
            return obj;
    }
};

int main(){
    A obj,obj1,ob;
    ob=get(obj);
    obj=-ob;//call to the operator
    put(obj);
    return 0;
}