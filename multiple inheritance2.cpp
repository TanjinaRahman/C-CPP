#include<iostream>
using namespace std;
class A{
public:
    A(){cout<<"Constructor A"<<endl;}
    ~A(){cout<<"destructor A"<<endl;}
};
class B{
public:
    B(){cout<<"Constructor B"<<endl;}
    ~B(){cout<<"destructor B"<<endl;}
};
class C:public A,public B{
public:
    C(){cout<<"Constructor C"<<endl;}
    ~C(){cout<<"destructor C"<<endl;}
};
int main(){
    C ob;
return 0;
}

