#include<iostream>
#include<cstdlib>
using namespace std;
class devidebyzero{};
double safe_devide(int top,int bottom) throw (devidebyzero)
{
    if(bottom==0)
        throw devidebyzero();
    return top/static_cast<double>(bottom);
}
int main(){
    int numerator,denumerator;
    double quotient;
    cout<<"enter numerator : ";
    cin>>numerator;
    cout<<"enter deumerator : ";
    cin>>denumerator;
    try
    {
        quotient=safe_devide(numerator,denumerator);
    }
    catch(devidebyzero)
    {
    cout<<"error"<<endl;
    exit(0);
    }
    cout<<numerator<<"/"<<denumerator<<"="<<quotient<<endl;
    cout<<"End";
return 0;
}
