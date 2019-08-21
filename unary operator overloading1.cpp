#include<iostream>
using namespace std;
class number{
int x,y;
public:
    number(){ x = 0; y = 0;}
    number(int a,int b){x = a ; y = b;}
    void get(int &a,int &b){ a = x; b = y; }
    void set(int a,int b){ x = a; y = b; }
    void print(){ cout<<x<<endl; }
    number operator ++ ();
};
number number::operator ++ (){
    number ob;
x++;
ob.x=x;
ob.y=y;
return ob;
}
int main(){
number n1(2,3);
cout<<"before = ";
n1.print();
++n1;
cout<<"after = ";
n1.print();
}
