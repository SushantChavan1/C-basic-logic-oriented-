//This program for to implement the pointer as object of class
#include<iostream>
using namespace std;
class A
{
    public:
    void show()//This is our inline function with defination
    {
        cout<<"welcome to class\n";
    }
};

int main()
{
    A *p;//here we can decelare  the pointer as object of class. Here deceleration with initillization
    p->show();//we calling the show by pointer
    return 0;
}
/*Note-when we call through pointer object of class there is no use of DOt operator(.)
  there is use of arrow operator(->) it is combination of (-) and grater than symbol(>)
*/