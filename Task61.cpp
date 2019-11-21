#include <iostream>
using namespace  std;
int main(){
  int a,b,c,d,e,f,g,z;
  cin>>a;
  b=a/10000;
 
  f=(a-(b*10000));
  c=f/1000;
  
  g=a-(b*10000)-(c*1000);
  d=g/100;
  
  e=g-(d*100);
  e=e/10;
z=a-(b*10000)-(c*1000)-(d*100)-(e*10);

  cout<<((b*10000)+(d*100)+z);
}