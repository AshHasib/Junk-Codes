#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> V;
    int n,i;
    int num;
    cout<<"Enter size:";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>num;
        V.push_back(num);
    }

    cout<<"Your vector:";

    for(i=0;i<n;i++) {
        cout<<V[i]<<"\t";
    }
    cout<<endl;
    n-=1;
    cout<<"Now it is:";
    for(i=0;i<n;i++) {
        cout<<V[i]<<"\t";
    }
    V.pop_back();

    cout<<endl;

    cout<<"Its size is:"<<V.size()<<endl;
    cout<<endl;
    return 0;
}
