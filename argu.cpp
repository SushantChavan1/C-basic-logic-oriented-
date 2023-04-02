#include<iostream>
using namespace std;
class A
{
    public:
    int * array();
};

int* A:: array()
{
    static int a[5];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}

int main()
{
    int *p;
    A obj;
    p=obj.array();
    cout<<"The elements of an array"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i);
    }
    return 0;
}