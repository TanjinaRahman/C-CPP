#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}


int main(){
int a,b,c;

cout<<"Enter two numbers:"<<endl;
cin>>a>>b;
c=sum(a,b);
cout<<"The sum is "<<c<<endl;

return 0;
}
