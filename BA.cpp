#include<iostream>

using namespace std;

int main()
{
  unsigned int N,K;
  cin>>N>>K;
  unsigned int price;
  unsigned int A[N],i;
  //int i;
  for(i=0;i<N;i++)
  {
    cin>>A[i];
  }
  cin>>price;
  unsigned sum=0;
  for(i=0;i<N;i++)
  {
    if(K!=i)
    {
      sum+=A[i];
    }
  }
  unsigned int actual=sum/2;
  unsigned int res=price-actual;
  if(res==0)
  {
    cout<<"Bon Appetit\n";
  }
  else
  {
    cout<<res<<endl;
  }

  return 0;
}
