#include <iostream>
using namespace std;
int main() {
 int a=0,n;
 cin>>n;
 double b,c=0,g,v,w;
 b=10;
 v=b;
 for(int i=0; i<100; i++){
 if(i<10){
   w=w+v;
 cout<<i+1<<"day"<<b<<endl;}
 if(i<8){
   c=c+b;
 }

 b=b+b/10;
}
 cout<<c<<endl;
b=10;
for(int j=0; j<=n;j++){
g=g+b;
b=b+b/10;

}
cout<<g<<endl;
b=10;
while(b<80){
  b=b+b/10;
  a++;
}
 cout<<a<<endl;
 }
