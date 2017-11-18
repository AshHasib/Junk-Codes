#include<bits/stdc++.h>

using namespace std;

int bigmod(int ,int , int);

int main() {
    int A,P,M;
    printf("Enter the respective values of A, P & M:");
    scanf("%d%d%d",&A,&P,&M);

    int res=bigmod(A,P,M);

    printf("The result is = %d\n",res);

    return 0;
}

int bigmod(int a,int p,int m) {
    if(p==0) {
        return 1;
    }
    if(p%2==0) {
        int x=bigmod(a,p/2,m);
        return (x*x)%m;
    }
    else if(p%2==1) {
        int z,y;

        z=a%m;
        y=bigmod(a,p-1,m);

        return (z*y)%m;
    }
}
