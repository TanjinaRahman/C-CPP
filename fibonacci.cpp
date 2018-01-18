#include<bits/stdc++.h>
using namespace std;

int main() {
  /* code */
  int a=0,b=1,c,n;

cin >> n;
std::cout << "Fibonacci series:" << '\n';
for(int i=0;i<n;i++){
  cout <<a<< ' ';
  c=a+b;
  a=b;
  b=c;

}
  return 0;
}
