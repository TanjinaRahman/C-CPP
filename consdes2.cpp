#include<iostream>
using namespace std;
class student{
int s=0;
public:
    student();
    ~student();
    void show();
};
student::student(){
cout<<"cons"<<endl;
s=1503039;
}
student::~student(){
cout<<"destructor"<<endl;
}
void student::show(){
cout<<s<<endl;
}
int main(){
    student ob;
    ob.show();
return 0;
}
