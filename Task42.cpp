
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,z,a=0,b=0,c=0,d;
cin>>x>>y>>z;
if((x%5!=0)&&(y%5!=0)&&(z%5!=0)){
  cout<<"error";
  return 0;
}
if(x%5==0){
a=x;
}
if(y%5==0){
b=y;
}
if(z%5==0){
c=z;
}
cout<<a+b+c;
}