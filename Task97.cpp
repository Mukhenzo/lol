#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,n;
    double p=1;
    cin>>a>>n;
    for (int i=1; i<=n; i++) {
        p*=i*(i+1);
    }
    cout<<p;
}
