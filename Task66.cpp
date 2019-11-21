#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    char inp[4];
    for (int i=0; i<4; i++) {
        cin>>inp[i];
    }
    int m[4],imax,imin;
    m[0]=int(inp[0])-48, m[1]=int(inp[1])-48, m[2]=int(inp[2])-48, m[3]=int(inp[3])-48;
    int min=m[0], max=m[0];
    for (int i=1; i<4; i++) {
        if (m[i]<min) {
            min=m[i];
            imin=i;
        }
        if(m[i]>max){
            max=i;
            imax=i;
        }
    }
    int buffer;
    buffer = m[imin];
    m[imin]=m[imax];
    m[imax] =buffer;
    for (int i=0; i<4; i++) {
        cout<<m[i];
    }
    return 0;
}