#include <iostream>
using namespace  std;
int main(){
  int a,b,c,d,e,f,g;
  cin>>a;
  b=a/1000;
 
  f=(a-(b*1000));
  c=f/100;
  
  g=a-(b*1000)-(c*100);
  d=g/10;
  
  e=g-(d*10);
if((b==c)||(b==d)||(b==e)||(c==d)||(c==e)||(d==e)){
 cout<<"Yes";
}}