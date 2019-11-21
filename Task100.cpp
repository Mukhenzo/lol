#include <iostream>
using namespace std;
int main() {
 int b,c,d,e,f;
 for(int i=1000; i<9999; i++){
  b=i%10;
  c=i/10%10;
  d=i/100%10;
  e=i/1000%10;
if((b!=5)&&(b!=6)&&(c!=5)&&(c!=6)&&(d!=5)&&(d!=6)&&(e!=5)&&(e!=5)){
cout<<(b*1000)+(c*100)+(d*10)+e<<endl;
}

 
 }
}