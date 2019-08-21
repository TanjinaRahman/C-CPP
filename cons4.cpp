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
    cout<<"Destructor";
}
void mycls::show()
{
    cout<<a<<","<<b<<endl;
}
int main()
{
    mycls ob(3,4);
    ob.show();

    return 0;
}
