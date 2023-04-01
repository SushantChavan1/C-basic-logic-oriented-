/*This program for to overload the comparasion operator in c++ by 
using the friend function*/
#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    friend int operator>(A&,A&);//deceleration of friend function with operator overloading
    A(int p,int q){
        a=p;
        b=q;
    }
};

int operator>(A & o1,A & o2){//defination of operator overloading
    if(o1.a>o2.b)//here it can perform the actual operation
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int c1,c2,i;
    cout<<"Enter the value of a&b=";
    cin>>c1>>c2;
    A o(c1,c2);
    i=o>o;//call of operator overloading
    if(i==0){
        cout<<"The "<<c1<<" is large";
    }
    else{
        cout<<"The "<<c2<<" is large";
    }
    return 0;
}