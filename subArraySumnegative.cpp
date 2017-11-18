#include<bits/stdc++.h>

using namespace std;

int main() {
    int A[1000];
    int N,i;
    printf("Enter array size:");
    scanf("%d",&N);
    printf("Enter the elements:");
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }

    //IMPLEMENTED BY MOHIT KUMAR- HANDLES HE CASES WHERE ALL NUMBERS ARE NEGATIVE
    int current=A[0];
    int soFar=A[0];
    for(i=1;i<N;i++) {
        current=max(A[i],current+A[i]);
        soFar=max(current,soFar);
    }
    printf("Maximum Subarray sum:%d\n",soFar);

    return 0;
}
