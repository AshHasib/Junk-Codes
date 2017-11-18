#include<iostream>

using namespace std;

int main()
{
    int A[]={4,5,234,345,468,5685,648,45};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<n<<endl;
    int *p[n];
    for(int i=0;i<n;i++)
    {
        p[i]=&A[i];
        cout<<p[i]<<endl;
    }
    return 0;

}
int func()
{

}
