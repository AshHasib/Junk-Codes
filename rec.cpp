#include<iostream>
using namespace std;
int fac(int);

int main(){
    int N;
    cout<<"enter a number:";
    cin>>N;

    int res=fac(N);

    cout<<res<<endl;

    return 0;
}

int fac(int n){
    if(n==0) return 1;

    return n*fac(n-1);
}
