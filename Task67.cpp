#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    double a1 = (-b+sqrt(pow(b, 2)-4*a*c))/(2*a),a2 = (-b-sqrt(pow(b, 2)-4*a*c))/(2*a);
    cout<<a1<<a2;
}