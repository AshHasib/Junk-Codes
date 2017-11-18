#include<iostream>

using namespace std;

long long bigmod(long long,long long,long long);

int main() {
    long long a,b,m;

    cout<<"Enter the respective values of number,power and mod value:";
    cin>>a>>b>>m;

    long long res=bigmod(a,b,m);

    cout<<"The result is : "<<res<<endl;

    return 0;
}

long long bigmod(long long b,long long p,long long m) {
    if(p==0) return 1;

    if(p%2==0) {
        long long c=bigmod(b,p/2,m) ;
        return (c*c)%m;
    }
    else {
        long x,y;
        x=b%m;
        y=bigmod(b,p-1,m);
        return (x*y)%m;
    }
}
