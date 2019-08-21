#include<iostream>
using namespace std;
class A{
int a;
public:
    A(int x){a=x;}
    int geta(){return a;}
};
class B{
int b;
public:
    B(int x){b=x;}
    int getb(){return b;}
};
class D:public A,public B{
int c;
public:
    D(int x,int y,int z):A(z),B(y){c=x;}
    int getc(){return c;}
};
int main(){
    D ob(1,2,3);
    cout<<"a = "<<ob.geta()<<" "<<"b = "<<ob.getb()<<' '<<"c = "<<ob.getc();
return 0;
}

