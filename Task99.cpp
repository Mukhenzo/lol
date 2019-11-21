#include <iostream>
using namespace std;
int main() {
 int b,c,d,e,f;
 for(int i=1000; i<9999; i++){
  b=i%10;
  c=i/10%10;
  d=i/100%10;
  e=i/1000%10;
if((b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e)){
cout<<(b*1000)+(c*100)+(d*10)+e<<endl;
}

 
 }
}