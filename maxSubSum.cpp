#include<bits/stdc++.h>

using namespace std;

int maxSum(int [],int );

int main() {
    int *A;
    int N;
    cin>>N;
    int i;
    A=new int[N+1];
    for(i=0;i<N;i++) {
        cin>>A[i];
    }
    int sum=maxSum(A,N);

    cout<<"The sum is :" <<sum<<endl;

    return 0;
}

int maxSum(int a[],int n){
    int current=0,soFar=0;

    for(int i=1;i<n;i++) {
        current=max(a[i],current+a[i]);
        soFar=max(current,soFar);
    }
    return soFar;
}
