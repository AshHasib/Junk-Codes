#include<iostream>

using namespace std;

int factorial(int);
int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int res=factorial(n);

    cout<<n<<"!="<<res<<endl;
    return 0;
}

int factorial(int N){
    if(N==0){
        return 1;
    }
    return N*factorial(N-1);
}
