#include<iostream>
using namespace std;
int mul(int a,int b)
{
    return a*b;
}
int mul(int a,int b,int c)
{
    return a*b*c;
}
double add(double a,double b)
{
    return a+b;
}
double add(double a,double b,int c)
{
    return a+b+c;
}
int main(){
    cout<<"add="<<add(5.4,3.4)<<endl;
    cout<<"add="<<add(3.4,4.5,4)<<endl;
    cout<<"mul="<<mul(3,4)<<endl;
    cout<<"mul="<<mul(5,4,9)<<endl;

return 0;
}
