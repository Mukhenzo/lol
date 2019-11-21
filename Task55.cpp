#include <iostream>
using namespace  std;
int main(){
  int a,b,c=0;
  cin>>a>>b;
c=a-b;
if(c==10){
  c=14;
}
if(c==15){
  c=11;
}
if(c==11){
  cout<<"Север";
}
if(c==12){
  cout<<"Запад";
}
if(c==13){
  cout<<"Юг";
}
if(c==14){
  cout<<"Восток";
}}