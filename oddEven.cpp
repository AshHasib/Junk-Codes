#include<iostream>

using namespace std;

int main()
{
  string S;
  int i,T;
  int len;
  cin>>T;
  for(i=1;i<=T;i++)
  {
    cin>>S;

    len=S.size();
    if(S[len-1]%2==0)
    {
      cout<<"Even\n";
    }
    else
    {
      cout<<"Odd\n";
    }
  }
  return 0;
}
