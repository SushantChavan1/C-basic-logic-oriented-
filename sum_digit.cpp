#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,temp;
    cout<<"Enter the number to find sum of digit\n";
    cin>>num;
    temp=num;
    while(num>0){
         
        rem=num%10;//To seperate the last digit of number
        sum=sum+rem;//To calculate the sum
        num=num/10;//To remove the number 
    }
    cout<<"The sum of digit of number "<<temp<<" is="<<sum;
  return 0;
}