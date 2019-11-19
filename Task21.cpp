
#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   cout<<"P"<<2*(a+b)<<endl;
   cout<<"S"<<((a*b)/2)<<endl;
   cout<<"G"<<pow((pow(a,2)+pow(b,2)), 0.5);
}
