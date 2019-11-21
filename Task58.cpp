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

  if(b-c==1){
    if(c-d==1){
      if(d-e==1){
        cout<<"yes";
      }
    }
  }
  }
