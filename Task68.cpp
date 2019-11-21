#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c){
        if (a+c>b) {
            if(b+c>a){
                int p=(a+b+c)/2, s=sqrt(p*(p-a)*(p-b)*(p-c));
                cout<<s;
            }
            cout<<"error";
        }
        cout<<"error";
    } else {cout<<"error"}
}