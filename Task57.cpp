#include <iostream>
using namespace  std;
int main(){
  int d1,m1,y1,d2,m2,y2;
  cin>>d1>>m1>>y1>>d2>>m2>>y2;
  if(y1<y2){
    if(m1<m2){
      if(d1<d2){
        cout<<"yes";
        return 0;
      }
      cout<<"no";
    }
    cout<<"no";
  }}
