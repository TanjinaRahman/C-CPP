#include<iostream>
using namespace std;
class mycls{
public:
    int a;
    int cg(int x){
        cin>>x>>a;
        x=a+x;
        cout<<x<<endl;
        }
};
int main(){
    mycls ob;
    ob.cg(mycls x);
return 0;
}
