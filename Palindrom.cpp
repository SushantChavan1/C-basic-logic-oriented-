#include<iostream>
using namespace std;
int main()
{
    int num,temp,rem,reverse=0;
    cout<<"Enter the number to check Palindrom or not\n";
    cin>>num;
    temp=num;
    while(num>0){

        rem=num%10;//To seperate the number
        reverse=(reverse*10)+rem;//To reverse the number
        num=num/10;//TO remove the number
    }
    if(reverse==temp){

        cout<<"The number is Palindrom";
    }
    else{

        cout<<"The number is not Palindrom";
    }
    return 0;
}