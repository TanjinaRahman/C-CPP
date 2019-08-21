#include<iostream>
using namespace std;

class myclass{
int a;
public:
    void set(int num);
    int A();
};
void myclass::set(int num)
{
    a=num;
}
int myclass::A()
{
    return a;
}

int main(){
    myclass ob1,ob2;
    ob1.set(99);
    ob2.set(10);

    cout<<"a = "<<ob1.A()<<endl;
    cout<<"a = "<<ob2.A()<<endl;

return 0;
}
