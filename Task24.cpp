
#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int d,p,s,a,b;
   cin>>d>>p>>s;
   a=((d*3)+s);
   b=(a*(100-p))/100;
   cout<<a-b;
}
