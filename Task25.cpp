#include <iostream>

using namespace std;
int main(){
   int a,b,p;
   cin>>a>>b;
   for(int i=0; i<5; i++){
     p=((a*b)/100);
     a=a+p;
   }
   cout<<a;
}