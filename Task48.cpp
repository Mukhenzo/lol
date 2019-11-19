

#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,z,a,count=0,max;
int arr[3];
cin>>x>>y>>z>>a;
if(x%2==0){
  arr[count]=x;
  count++;
}
if(y%2==0){
  arr[count]=y;
  count++;
}
if(z%2==0){
  arr[count]=z;
  count++;
}
if(a%2==0){
  arr[count]=a;
  count++;
}
max=arr[0];
for(int i=0; i<count+1; i++){
  if(arr[i]<arr[i+1]){
    max=arr[i+1];
  }
  }
cout<<max;
}
