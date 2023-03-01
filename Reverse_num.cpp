#include<iostream>
using namespace std;
int main()
{
    int reverse=0,rem,num;//for long number you can decelare as long int
    cout<<"Enter the number to reverse\n";
    cin>>num;
    while(num>0){
        rem=num%10;//To seperate the digit
        reverse=(reverse*10)+rem;//To multiply by 10 and get number
        num=num/10;//To remove the number
    }
    cout<<"The reverse number is="<<reverse;
    return 0;
}