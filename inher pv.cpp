#include<iostream>
using namespace std;
class num{
private:
    int roll;
    int mark;
public:
    void input(){cin>>roll>>mark;}
    void output(){cout<<"Roll = "<<roll<<endl<<"Mark = "<<mark<<endl;}
};
class result:public num{
public:
    void res(){input();output();}
    };
int main(){
    result obj;
    obj.input();
    obj.output();
return 0;
}
