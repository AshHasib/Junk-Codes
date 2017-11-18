#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
	while(!cin.eof())
	{
		int ct,n;
		int res;
		cin>>ct>>n;
		if((ct>0 && ct<=100)&&(n>0 && n<=100))
		{
			int A[n];
			int i,total=0;

			for(i=0;i<n;i++)
			{
				cin>>A[i];
				total+=A[i];
			}
			
			if(ct%total==0)
			{
				res=ct/total;
			}
			else
			{
				res=(ct/total)+1;
			}
			if(res==1)
			{
				cout<<"Project will finish within 1 day."<<endl;
			}
			else
			{
				cout<<"Project will finish within "<<res<<" days."<<endl;
			}
		}
		
	}
	

	return 0;
}