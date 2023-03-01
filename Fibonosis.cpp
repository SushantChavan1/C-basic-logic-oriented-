#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,num;
    cout<<"Enter the number to display upto fibonosis series\n";
    cin>>num;
    for(int i=0;i<=num;i++){
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
    }
    return 0;
}