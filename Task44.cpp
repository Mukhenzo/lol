#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if((x>y)&&(x>z)){
 if(y>z){
   cout<<x<<" "<<y;
 }
 else{
   cout<<x<<" "<z;
 } 
}
if((y>x)&&(y>z)){
 if(x>z){
   cout<<x<<" "<<y;
 }
 else{
   cout<<y<<" "<<z;
 } 
}
if((z>y)&&(z>x)){
if(y>x){
   cout<<z<<" "<<y;
 }
 else{
   cout<<y<<" "<<z;
 } 
}

}