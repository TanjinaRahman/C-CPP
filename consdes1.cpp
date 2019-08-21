#include<iostream>
using namespace std;

class myclass{
int a;
public:
    myclass();
    ~myclass();
    void show();
};
myclass::myclass()
{
    cout<<"Constructor = ";
    a=10;
}
myclass::~myclass()
{
    cout<<"Destructor";
}
void myclass::show()
{
    cout<<a<<endl;
}
int main(){
    myclass obj;
    obj.show();

return 0;
}
