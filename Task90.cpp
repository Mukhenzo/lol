#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double p,a,b;
  int n;
  a=3.0;
  b=5.0;
  p=0;
 for(double i=1.0; b<=113; i++){
  p=p+cos(a/b);
  a=a+2;
  b=b+2;
  
 }
 cout<<p;
}