#include<iostream>

using namespace std;

int fib(int);

int main(){
    int N;
    cout<<"Upto how much do you want? ";
    cin>>N;
    int F[N];

    for(int i=1;i<=N;i++){
        F[i]=fib(i);
    }
    for(int i=1;i<=N;i++){
        cout<<F[i]<<"\t";
    }
    cout<<endl;

    return 0;
}
int fib(int n){
    if(n<=1) return n;
    int v;
    return v=fib(n-1)+fib(n-2);
}
