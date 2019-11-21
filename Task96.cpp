#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,n;
    double s=0;
    cin>>a>>n;
    for (int i=1; i<=n; i++) {
        s+=1/pow(cos(a), i);
    }
    cout<<p;
}