#include<iostream>
using namespace std;
class number{
int a,b;
public:
    number(){a=0;b=0;}
    number(int x,int y){a=x;b=y;}
    void get(int &x,int &y){x=a;y=b;}
    void set(int x,int y){a=x;b=y;}
    void print(){cout<<a<<" "<<b<<endl;}
    number operator - (number ob);
};
number number :: operator - (number ob)
{
    number tmp;
    tmp.a=a-ob.a;
    tmp.b=b-ob.b;
    return tmp;
}
int main(){
    number n1(4,2),n2(4,6),n3;
    n3=n1-n2;
    n3.print();
return 0;
}
