#include<bits/stdc++.h>
//This is the naive method of finding the maximum subarray sum
using namespace std;

int main()
{
	int A[1000];
	int N,i,j;
	int sum;
	int max=0;

	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}

	for(i=0;i<N-2;i++)
	{
		sum=0;

		for(j=i+1;j<=N-1;j++)
		{
			sum+=A[j];

			if(sum>max)
			{
				max=sum;
			}
		}
	}
	cout<<"Maximum = "<<max<<endl;

	return 0;
}