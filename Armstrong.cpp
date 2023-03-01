#include<iostream>
using namespace std;
int main()
{ 
    int num,sum=0,rem,temp;
    cout<<"Enter the number to find Armstrong or Not\n";
    cin>>num;
    temp=num;
    while(num>0){

        rem=num%10;//To seperate the number 
        sum=sum+(rem*rem*rem);//To calaulate the code and perform addition
        num=num/10;//To remove the number
    }
    if(sum==temp){
        cout<<"The number is Armstrong";
    }
    else{
        cout<<"The number is not Armstrong";
    }
    return 0;
}