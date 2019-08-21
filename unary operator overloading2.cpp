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
    number operator ++ (int a);
};
number number::operator ++ (int a){
    number ob;
    ob.x=x;
    ob.y=y;
    x++;y++;
    return ob;
}
int main(){
    number n1(1,3),n2(4,5),n3;
    cout<<"before = ";
    n1.print();
    n3=n1++;
    cout<<"after = ";
    n1.print();
    n3.print();
return 0;
}
