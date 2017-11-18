#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> S;
    int i,t;
    int n;

    cin>>n;
    for(i=0;i<n;i++) {
        cin>>t;
        S.push(t);
    }
    cout<<"Stack:";
    for(i=0;i<n;i++) {
        cout<<S.top()<<"\t";
        S.pop();
    }
    cout<<endl;
    return 0;

}
