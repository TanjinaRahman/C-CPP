#include<iostream>
using namespace std;
class samp{
int a,b;
public:
    void set(int i, int j){a = i; b = j;}
    void show(){cout<<a<<' '<<b<<endl;}
};
int main(){
    samp ob1,ob2;
    ob1.set(10,12);
    ob2 = ob1;
    ob1.show();
    ob2.show();

return 0;
}
