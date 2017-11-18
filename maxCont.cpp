#include<bits/stdc++.h>

using namespace std;

int maxSum(int a[],int n)
{
	int maxEnding=0,maxSoFar=INT_MIN;

	for(int i=0;i<n;i++)
	{
		maxEnding+=a[i];
		if(maxSoFar<maxEnding)
		{
			maxSoFar=maxEnding;
		}
		if(maxEnding<0)
			maxEnding=0;
	}
	return maxSoFar;
}

int main()
{
	int A[1000];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	int sum=maxSum(A,N);

	cout<<sum<<endl;

	return 0;
}