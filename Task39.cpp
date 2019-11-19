
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,c;
cin>>x>>y;
if(x>y){
  cout<<"Yes";
}
else {
  c=x;
  x=y;
  y=c;
  cout<<x<<" "<<y;
  
}}
