#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> Q;

    int N,num,i;

    cin>>N;

    for(i=0;i<N;i++) {
        cin>>num;
        Q.push(num);
    }
    cout<<"Queue:";
    for(i=0;i<N;i++) {
        cout<<Q.front()<<"\t";
        Q.pop();
    }
    cout<<endl;
    return 0;
}
