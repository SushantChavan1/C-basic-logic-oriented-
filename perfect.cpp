#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the number to check Perfect or not\n";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%num==0){
            sum=sum+i;//To calculate the sum
        }
    }
    if(num==sum){

        cout<<"The number is Perfect";
    }
    else{

        cout<<"The number is not Perfect";
    }
    return 0;
}