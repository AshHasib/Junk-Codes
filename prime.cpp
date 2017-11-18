#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int);
int main() {
    int N;
    while(1){
        cout<<"Enter a number(0 to exit):";
        cin>>N;
        if(N==0)
        break;
        bool a=isPrime(N);
        if(a==true) {
            cout<<"The number is prime\n";
        }
        else {
            cout<<"The number is not prime\n";
        }
    }
    return 0;
}

bool isPrime(int n) {
    int i,root;
    root=sqrt(n);
    if(n==1) return false;
    if(n==2) return true;
    for(i=2;i<=root;i++) {
        if(n%i==0)
            return false;
    }
    return true;
}
