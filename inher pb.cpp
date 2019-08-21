#include<iostream>
using namespace std;
class student{
public:
    int roll;
    int mark;
};
class result:public student{
public:
    void num(){cin>>roll>>mark;}
    void res(){cout<<"Roll = "<<roll<<endl<<"Mark = "<<mark<<endl;}
};
int main(){
    result obj;
    obj.num();
    obj.res();
return 0;
}
