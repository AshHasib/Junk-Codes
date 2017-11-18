#include<bits/stdc++.h>

using namespace std;

void fib(int);

int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    fib(num);
    //printf("Result is = %d\n",f);

    return 0;
}

void fib(int n) {
    int f[n+1];
    f[0]=0;
    f[1]=1;

    for(int i=2;i<=n;i++) {
        f[i]=f[i-1] +f[i-2];
    }

    //return f[n];
    printf("The fibonacci series up to %d\n",n);
    for(int i=0;i<n;i++) {
        printf("%d\t",f[i]);
    }
    printf("\n");
}
