#include <iostream>
using namespace  std;
int main(){
  int d,m,y;
  cin>>d>>m>>y;
  if((d>0)&&(d<32)&&(m>0)&&(m<13)&&(y>-1)&&(y<2020)){
    if(m==2){
      if(d<29){
        cout<<"yes";
        return 0;
      }
    }
  if(m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12){
    if(d<32){
      cout<<"yes";
      return 0;
    }
  }
  if(m==4)||(m==6)||(m==11)||(m==9)||(m==11){
    cout<<"yes";
    return 0;
  }
  cout<<"no";
  }
