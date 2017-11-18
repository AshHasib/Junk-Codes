#include<iostream>
using namespace std;

int main()
{
  int A[101];
  int N,i;
  int Count[101]={0};

  cin>>N;
  for(i=0;i<N;i++)
  {
    cin>>A[i];
    Count[A[i]]++;
  }
  int pair=0;
  for(i=0;i<101;i++)
  {
    if(Count[i]!=0)
    {
      pair+=Count[i]/2;
    }
  }
  cout<<pair<<endl;

  return 0;
}
