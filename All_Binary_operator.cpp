/*This program for to implement the 8 binary operator in cpp nd in this way 
 we can implement the all binary operator in one program*/
#include<iostream>
using namespace std;
class All{
    public:
    int a,b,c;
    void getinfo(){
        cout<<"Enter the values of a & b=";
        cin>>a>>b;
    }
    friend All operator+(All&,All&);
    friend All operator-(All&,All&);
    friend All operator*(All&,All&);
    friend All operator/(All&,All&);
    friend int operator>(All&,All&);
    friend int operator<(All&,All&);
    friend int operator>=(All&,All&);
    friend int operator<=(All&,All&);
};

All operator+(All & o1,All & o2){
    All o3;
    o3.c=o1.a+o2.b;
    return o3;
}

All operator-(All & o1,All & o2){
    All o3;
    o3.c=o1.a-o2.b;
    return o3;
}

All operator*(All & o1,All & o2){
    All o3;
    o3.c=o1.a*o2.b;
    return o3;
}

All operator/(All & o1,All & o2){
    All o3;
    o3.c=o1.a/o2.b;
    return o3;
}

int operator>(All &o1,All &o2){

    if(o1.a>o2.b){
        return 0;
    }
    else{
        return 1;
    }
}

int operator<(All &o1,All &o2){

    if(o1.a<o2.b){
        return 0;
    }
    else{
        return 1;
    }
}

int operator>=(All &o1,All &o2){

    if(o1.a>=o2.b){
        return 0;
    }
    else{
        return 1;
    }
}

int operator<=(All &o1,All &o2){

    if(o1.a>o2.b){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    All obj[8],obj1[4];//creating array as object
    int o;
    for(int i=0;i<8;i++){
        obj[i].getinfo();
        if(i==0){
            obj1[i]=obj[i]+obj[i];//operator call by array object
            cout<<"The addition= "<<obj1[i].c<<endl;
        }
        if(i==1){
            obj1[i]=obj[i]-obj[i];
            cout<<"The substractiontion= "<<obj1[i].c<<endl;
        }
        if(i==2){
            obj1[i]=obj[i]*obj[i];
            cout<<"The multipication= "<<obj1[i].c<<endl;
        }
        if(i==3){
            obj1[i]=obj[i]/obj[i];
            cout<<"The division= "<<obj1[i].c<<endl;
        }
        if(i==4){
            int o;
            o=obj[i]>obj[i];
            if(o==0){
                cout<<"The A is large"<<endl;
            }
            else{
                cout<<"The B is large"<<endl;
            }
        }
        if(i==5){
            int o;
            o=obj[i]<obj[i];
            if(o==0){
                cout<<"The A is small"<<endl;
            }
            else{
                cout<<"The B is small"<<endl;
            }
        }
        if(i==6){
            int o;
            o=obj[i]>=obj[i];
            if(o==0){
                cout<<"The A is grater or equal to b"<<endl;
            }
            else{
                cout<<"The A is not grater or equal to b"<<endl;
            }
        }
         if(i==7){
            int o;
            o=obj[i]<=obj[i];
            if(o==0){
                cout<<"The A is small or equal to b"<<endl;
            }
            else{
                cout<<"The A is not small or equal to b"<<endl ;
            }
        }
    }
 return 0;
}             