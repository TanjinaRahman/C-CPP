#include<iostream>
using namespace std;
class ab{
    int x;
public:
    ab(){x=0;}
    ab(int a){x=a;}
    int get(){return x;}
};
int main(){
   ab ob1(10),ob2;
   cout<<ob1.get()<<endl;
   cout<<ob2.get()<<endl;
return 0;
}

