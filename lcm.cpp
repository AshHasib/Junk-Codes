#include<iostream>

using namespace std;
int GCD (int a,int b) {
    if(b==0) {
        return a;
    }
    else return GCD(b,a%b);
}
int LCM(int a,int b) {
    int l=(a/GCD(a,b))*b;

    return l;

}

int main(){
    int n1,n2;

    cin>>n1>>n2;
    int gcd=GCD(n1,n2);

    cout<<"GCD="<<gcd<<endl;
    cout<<"LCM="<<LCM(n1,n2)<<endl;
    return 0;
}

