#include<iostream>
using namespace std;

int main()
{
  int Y;
  cin>>Y;

  if(Y==1918)
  {
    cout<<"26.09."<<Y<<endl;
  }
  else if((Y<1918 && Y%4==0)||(Y%400==0)||(Y%4==0 && Y%100!=0))
  {
    cout<<"12.09."<<Y<<endl;
  }
  else
  {
    cout<<"13.09."<<Y<<endl;
  }
  return 0;
}
