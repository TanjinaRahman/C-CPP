#include<iostream>
using namespace std;

void date(int day,int month,int year)
{
    cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
}
void date(char *date)
{
    cout<<"Date:"<<date<<endl;
}
int main(){
    date("25/7/97");
    date(25,7,97);

return 0;
}
