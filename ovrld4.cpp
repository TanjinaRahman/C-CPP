#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
double add(double a,double b)
{
    return a+b;
}
int main(){
    cout<<add(25,35)<<endl;
    cout<<add(25.57,35.45)<<endl;

return 0;
}
