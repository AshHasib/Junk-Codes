#include<iostream>

using namespace std;
unsigned long long int fact(unsigned long long int n) {
    if(n==0) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

int main() {
    unsigned long long int num;
    cout<<"Enter a number:";
    cin>>num;

    cout<<num<<"!="<<fact(num)<<endl;

    return 0;
}
