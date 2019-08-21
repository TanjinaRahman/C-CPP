#include<iostream>
using namespace std;
class mycls{
int a,b;
public:
    mycls(int i,int j);
    ~mycls();
    void show();
};
mycls::mycls(int i,int j)
{
    cout<<"Constructor:";
    a=i;
    b=j;
}
mycls::~mycls()
{
    cout<<"Destructor"<<endl;
}
void mycls::show()
{
    cout<<a<<","<<b<<endl;
}
int main(){
    int x,y;
    cout<<"Enter two number:"<<endl;
    cin>>x>>y;
    mycls obj(x,y);
    obj.show();

return 0;
}
