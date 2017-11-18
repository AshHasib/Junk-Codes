#include<stdio.h>
int main () {

    int A,B;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++) {
        scanf("%d%d",&A,&B);
        int sum=A+B;
        printf("Case %d : %d\n",i,sum);
    }
    return 0;
}
