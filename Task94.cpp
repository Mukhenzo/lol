#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double p;
  int n;
  cin>>n;
  p=0;
 for(double i=1.0; i<=n; i++){
  p=p+1/i;
 }
 cout<<p;
}