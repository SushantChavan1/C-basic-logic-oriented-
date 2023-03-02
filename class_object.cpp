//This program for to implements simple structure of C++
//As well as the class & object concept of C++
#include<iostream>//This is an linker section to include header file
using namespace std;
class A//deceleration of class
{
    public://Is an access specifire in c++ to access the data of class anywhere
    int num;//Data member of class A
    int show();//deceleration of member function of class A
};

int A::show()//defination of member function outside main using scope resoulation operatop
{
   int num=100;//initillisition of data member here
   cout<<"This is an simple program for class and object......";
   return 0;      
}

int main()//This is an main function of C++
{
    A objcet;//Here we can create the object of class A for calling of function show
    objcet.show();//Here we can call the function show by object
    return 0;
}