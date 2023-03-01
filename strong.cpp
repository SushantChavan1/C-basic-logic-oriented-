#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,fact,rem,temp;//To claculate for long number decelare as long int
    cout<<"Enter the number to check strong or not\n";
    cin>>num;
    temp=num;
    while(num>0){
        
        rem=num%10;//To seperate the number
        fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;//To claculate sum of factors
        num=num/10;//To remove the number
    }
    if(sum==temp){
        cout<<"The number is Strong";
    }
    else{
        cout<<"The number is not Strong";
    }
    return 0;
}