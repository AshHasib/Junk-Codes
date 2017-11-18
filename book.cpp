#include<iostream>
using namespace std;

int main()
{
    int n,p;

    cin>>n>>p;

    int i=1;
    int counter=0,counter2=0;
    while(i<=n)
    {

        if(i>=p)
            break;
            counter++;
        i=i+2;

    }
    i=n;
    while(i>=1)
    {
        if(i<=p)
            break;
        counter2++;
        i=i-2;
    }
    cout<<counter<<endl;
    cout<<counter2<<endl;
}
