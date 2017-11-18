#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	//int M1[5];
	//int M2[5];
	int a,b,c,d,e=0;
	cin>>T;
	while(T--)
	{
		e=0;
		for(int i=0;i<2;i++)
		{
			cin>>a>>b>>c>>d;
			if((a+b)>(c+d))
			{
				e++;
			}
		}
		if(e==2)
		{
			cout<<"Banglawash"<<endl;
		}
		else
		{
			cout<<"Miss"<<endl;
		}
	}
	
	return 0;
}