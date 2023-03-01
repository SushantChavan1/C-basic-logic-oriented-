#include<iostream>
using namespace std;
int main()
{
    int num,cunt=0,fact=1;//To calculate the long number decelare as long int
    cout<<"Enter the number to find Factorial\n";
    cin>>num;
    for(int i=1;i<=num;i++){

        fact=fact*i;
    }
    cout<<"The factorial of "<<num<<" is="<<fact;
   return 0;
}
