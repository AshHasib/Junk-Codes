#include<bits/stdc++.h>

using namespace std;

int main() {
    int A[1000];
    int N,i;
    int maxe=0,maxs=0;
    printf("Enter the number of elements:");
    scanf("%d",&N);

    printf("Enter elements:");
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }

    //KADANE'S ALGORITHM
    for(i=0;i<N;i++) {
        maxe+=A[i];
        if(maxe<0) {
            maxe=0;
        }
        else if(maxs<maxe) { //only compare when maxe is greater than zero
            maxs=maxe;
        }
    }
    printf("MAXIMUM SUBARRAY SUM = %d\n",maxs);

    return 0;
}
