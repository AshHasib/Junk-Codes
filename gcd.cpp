#include<iostream>

using namespace std;
int GCD (int a,int b) {
    if(b==0) {
        return a;
    }
    else return GCD(b,a%b);
}

int main(){
    int n1,n2;

    cin>>n1>>n2;
    int gcd=GCD(n1,n2);

    cout<<"GCD="<<gcd<<endl;

    return 0;
}
