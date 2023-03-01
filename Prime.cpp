#include<iostream>
using namespace std;
int main()
{
    int cunt=0,num;
    cout<<"Enter the number to check Prime or not\n";
    cin>>num;
    for(int i=0;i<=num;i++){
        if(i%num==0){
            cunt++;
        }
    }
    if(cunt==2){

        cout<<"The number is Prime";
    }
    else{

        cout<<"The number is not prime";
    }
    return 0;
}