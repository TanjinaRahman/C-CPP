#include<iostream>
using namespace std;
int ab(int a,int b)
{
    return a+b;
}
int ab(int a)
{
return a;
}
int main(){
cout<<ab(6,5)<<endl;
cout<<ab(5)<<endl;
return 0;
}
