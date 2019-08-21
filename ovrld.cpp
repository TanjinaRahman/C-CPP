#include<iostream>
using namespace std;
int abs(int n)
{
    cout<<"Integer abs"<<endl;
    return n<0? -n:n;
}
long abs(long n)
{
    cout<<"long abs"<<endl;
    return n<0? -n:n;
}
double abs(double n)
{
    cout<<"double abs"<<endl;
    return n<0? -n:n;
}
int main(){
    cout<<abs(-10)<<endl;
    cout<<abs(-10L)<<endl;
    cout<<abs(-10.80)<<endl;
    cout<<abs(10)<<endl;
    cout<<abs(10L)<<endl;
    cout<<abs(10.80)<<endl;

return 0;
}
