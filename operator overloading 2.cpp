#include<iostream>
using namespace std;
class overload{
int x,y;
public:
    overload(){x=0;y=0;}
    overload(int a,int b){x=a;y=b;}
    void print(){cout<<x<<" "<<y<<endl;}
    overload operator +(overload ob);
    };
overload overload::operator +(overload ob){
overload temp;
temp.x=x+ob.x;
temp.y=y+ob.y;
return temp;
}
int main(){
    overload ob1(2,3),ob2(4,5),ob3;
    ob3=ob1+ob2;
    ob3.print();
return 0;
}
