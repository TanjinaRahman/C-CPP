#include<iostream>
using namespace std;

class myclass{
int a;
public:
    myclass();
    void show();

};
myclass::myclass(){
cout<<"In construction a = ";
a=10;
}
void myclass::show()
{
    cout<<a;
}
int main(){
myclass obj;
obj.show();
return 0;
}
