#include<iostream>
using namespace std;

class myclass{
int a;
public:
    myclass(int i);
    ~myclass();
    void show();
};
myclass::myclass(int i)
{
    cout<<"Constructor:";
    a=i;
}
myclass::~myclass()
{
    cout<<"destructor";
}
void myclass::show()
{
    cout<<a<<endl;
}
int main(){
    myclass obj(4);
    obj.show();

return 0;
}
