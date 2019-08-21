#include<iostream>
using namespace std;
class student{
public:
    int roll=20;
    int mark=80;
};
class result:private student{
public:
    void num(){cin>>roll>>mark;}
    void res(){cout<<"Roll = "<<roll<<endl<<"Mark = "<<mark<<endl;}
};
int main(){
    ///result obj;
    ///obj.roll;
    ///obj.mark;
    student obj;
    obj.roll;
    obj.mark;
    cout<<obj.roll<<" "<<obj.mark<<endl;
return 0;
}
