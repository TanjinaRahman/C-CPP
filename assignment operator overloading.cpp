#include<iostream>
using namespace std;
class number{
int x,y;
public:
    number(){x=0;y=0;}
    number(int a,int b){x=a;y=b;}
    void get(int &a,int &b){a=x;b=y;}
    void set(int a,int b){x=a;y=b;}
    void print(){cout<<x<<" "<<endl;}
    number operator = (number ob);
};
number number :: operator = (number ob){
ob.x=x;
ob.y=y;
return *this;
}
int main(){
    number n1(2,3),n2(4,5),n3;
    n1.print();
    n2.print();
    n3=n1=n2;
    n1.print();
    n2.print();
    n3.print();
return 0;
}
