#include<iostream>
#include<string>
using namespace std;

int main(){
    string S;
    getline(cin,S);

    cout<<"Size="<<S.size()<<endl;
    for(int i=0;i<S.size();i++) {
        S[i]+=1;
    }

    cout<<S<<endl;

    return 0;
}
