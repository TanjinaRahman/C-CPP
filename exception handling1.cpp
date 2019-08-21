#include<iostream>
using namespace std;
int main(){
    int milk,donut;
    double ans;
    try{
    cout<<"Enter milk:";
    cin>>milk;
    cout<<"Enter donut:";
    cin>>donut;
    if(milk<=0)
        throw donut;
    ans=donut/static_cast<double>(milk);
    cout<<"donut:"<<donut<<endl<<"milk:"<<milk<<endl<<"Ans="<<ans<<endl;
    }
    catch(int i)
    {
        cout<<"no milk"<<i;
    }
    cout<<"The End"<<endl;
    return 0;
    }
