#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void get(int a){
       this ->a=a;//This keyword initillization
    }
    A* put(){
        return (this);//returning this keyword 
    }
};
int main(){
    int a;
    cout<<"enter the value of a=";
    cin>>a;
    A obj,*p;
    obj.get(a);
    p=obj.put();
    cout<<"The value of a="<<p->a;//accessing value of a
    return 0;
}