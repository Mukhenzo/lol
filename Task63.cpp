#include <iostream>
using namespace  std;
int main(){
  int a,b,c,d,e,f,g,z,y,x;
  cin>>a;
  b=a/1000;
 d=(a-(b*1000));
  c=d/100;
e=d-(c*100);
f=e/10;
g=e-(f*10);
if((b==g)&&(c==f)){
  cout<<"yes";
}else{
  cout<<"no";
}
 

}