#include<iostream>
using namespace std;

int main()
{
  int N;
  int K,i;
  int tmp=0;
  int counter=0;
  cin>>N>>K;
  int A[N];
  for(i=1;i<=N;i++)
  {
    cin>>A[i];
  }

  for(i=1;i<=N;i++)
  {
    for(int j=i+1;j<=N;j++)
    {
      if((A[i]+A[j])%K==0)
      {
        counter++;
      }

    }
  }

  cout<<counter<<endl;

  return 0;
}
