#include <iostream>
using namespace std;

int main() {
    char inp[4];
    for (int i=0; i<4; i++) {
        cin>>inp[i];
    }
    int i0=int(inp[0])-48, i1=int(inp[1])-48, i2=int(inp[2])-48, i3=int(inp[3])-48;
    if (i0<5) {
        if (i1<5) {
            if (i2<5) {
                if(i3<5){
                    cout<<i0<<i1<<i2<<i3<<endl;
                }
                cout<<i0<<i2<<i1<<i3<<endl;
            }
            cout<<i0<<i1<<i2<<i3<<endl;
        }
        if (i2<5) {
            if(i3<5){
                cout<<i0<<i2<<i3<<i1<<endl;
            }
            cout<<i0<<i2<<i1<<i3<<endl;
        }
        if(i3<5){
            cout<<i0<<i3<<i2<<i1<<endl;
        }
    }
    if(i1<5){
        if (i2<5) {
            if(i3<5){
                cout<<i1<<i0<<i2<<i3<<endl;
            }
            cout<<i1<<i2<<i0<<i3<<endl;
        }
        cout<<i1<<i0<<i2<<i3<<endl;
    }
    if(i2<5){
        if(i3<5){
            cout<<i2<<i0<<i3<<i1<<endl;
        }
        cout<<i2<<i0<<i1<<i3<<endl;
    }
    if(i3<5){
        cout<<i3<<i0<<i2<<i1<<endl;
    }
    return 0;
}
