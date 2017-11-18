#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N;

	cout<<"Enter Size of the Array:";
	cin>>N;

	int A[N];
	int K,PTR,TEMP,i;

	cout<<"Enter elements:";

	for(i=1;i<=N;i++)
	{
		cin>>A[i];
	}
	//performing insertion sort
	for(K=2;K<=N;K++)
	{
		TEMP=A[K];
		PTR=K-1;

		while(TEMP<A[PTR])
		{
			A[PTR+1]=A[PTR];
			PTR--;
		}
		A[PTR+1]=TEMP;
	}

	cout<<"SORTED LIST:";

	for(i=1;i<=N;i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;

	return 0;

}