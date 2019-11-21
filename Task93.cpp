#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int p=0;
  int n;
  cin>>n;
  p=0;
 for(int i=1; i<=n; i++){
  p=p+(pow(i,2));
 }
 cout<<p;
}