#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double p,a,b;
  int n;
  a=2.0;
  b=3.0;
  p=0;
 for(double i=1.0; i<=8; i++){
  p=p+a/b;
  a++;
  b++;
  
 }
 cout<<p;
}