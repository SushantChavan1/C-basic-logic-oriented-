//This program for dynamic memmory allocation in c++
//by usin switch case
#include<iostream>
using namespace std;
class D{
    public:
    int *p,size;
    int modify_array();
};
int D::modify_array(){

    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the modified elements of an array"<<endl;
    p=new int[size];//This is an new operator used to allocate the dynamic memory
    for(int i=0;i<size;i++){
        cin>>p[i];
    }
    cout<<"The modified elements of an array are given below"<<endl;
    for(int i=0;i<size;i++){

        cout<<p[i]<<endl;
    }
    delete p;
    
    cout<<"The memory is distroied"<<endl;
    return 0;
}

int main()
{
    int ch;
    D ob;
    do{
    cout<<"*********Menu***********"<<endl;
    cout<<"1.get array"<<endl;
    cout<<"2.modify array"<<endl;
    cout<<"3.exit"<<endl;
    cout<<"Enter your choise"<<endl;
    cin>>ch;
    switch(ch){

        case 1:
          ob.modify_array();
          break;
        case 2:
          ob.modify_array();
          break;
        case 3:
           exit(0);
           break;
        default:
           cout<<"Enter the correct choise"<<endl;
           break;
    }
    }while(ch!=3);
    return 0;
}