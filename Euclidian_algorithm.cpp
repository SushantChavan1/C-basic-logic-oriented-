#include<iostream>
using namespace std;
class Alg{
    public:
    int a,b,rem,temp;
    void algo();
};

void Alg::algo(){
    cout<<"Enter the value of a&b";
    cin>>a>>b;
    while((b % a)>0){
        rem=b % a;
        cout<<rem;
        temp=b;
        b=a;
        a=rem;
    }
    if(a==1){
    cout<<"The numbers are relatively prime";
    }
    else{
        cout<<"The numbers are not relatively prime";
    }
}

int main(){
    Alg obj;
    obj.algo();
    return 0;
}