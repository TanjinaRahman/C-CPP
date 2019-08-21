#include<iostream>
using namespace std;
class samp{
int i,j;
public:
    samp(int a,int b);
    int div();
};
samp::samp(int a,int b)
{
    i=a;
    j=b;
}
inline int samp::div()
{
    return !(i%j);
}
int main(){
    samp ob1(10,2),ob2(10,3);
    if(ob1.div())
        cout<<"10 is divisible by 2";
    if(ob2.div())
        cout<<"10 is divisible by 3";

return 0;
}
