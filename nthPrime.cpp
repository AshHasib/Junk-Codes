#include<bits/stdc++.h>

#define MAX 100000
using namespace std;

void nPrime(int n) {
    int counter=1;
    int i,j;
    bool flag=true;
    if(n==1) {
        printf("%d\n",2);
        return;
    }
    for(i=3;i<=MAX;i=i+2) {
        for(j=3;j<=sqrt(i);j=j+2) {
            if(i%j==0) {
                flag=0;
                break;
            }
        }
        if(flag==false) counter++;
        if(flag) {
            if(counter==n) {
                printf("%d",i);
                return;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    nPrime(n);

    return 0;
}
