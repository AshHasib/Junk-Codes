#include<stdio.h>

int main() {
    int A[100];
    int N,i,m1,m2;
    scanf("%d",&N);

    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    m1=A[0];
    m2=A[0];

    for(i=0;i<N;i++) {
        if(A[i]>m1) {
            m2=m1;
            m1=A[i];
        }
        else if((A[i]>m2)&&(A[i]<m1)){
            m2=A[i];
        }
    }
    printf("2nd Max=%d\n",m2);

    return 0;
}
