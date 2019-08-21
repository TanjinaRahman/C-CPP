#include<iostream>
using namespace std;
class myclass{
public:
    int a;
};
int main(){
myclass ob1,ob2;
ob1.a=99;
ob2.a=100;

cout<<"a = "<<ob1.a<<endl;
cout<<"a = "<<ob2.a<<endl;

return 0;
}
