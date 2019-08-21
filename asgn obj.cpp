#include<iostream>
using namespace std;
class rect{
int height;
int width;
public:
    int area();
    void set(int h,int w);
};

int rect::area(){
return height*width;
}
void rect::set(int h,int w)
{
    height=h;
    width=w;
}
int main(){
    rect obj,obj1;
    obj.set(3,5);
    obj1.set(3,4);

    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj1.area()<<endl;
    obj1=obj;
    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj1.area()<<endl;

return 0;
}
