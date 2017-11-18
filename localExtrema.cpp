#include<bits/stdc++.h>
using namespace std;


int main()
{
	int A[1002];
	int N;
	int i;
	int counter=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=1;i<N-1;i++)
	{
		if((A[i]<A[i-1])&&(A[i]<A[i+1]))
		{
			counter++;
		}
		if((A[i]>A[i-1])&&(A[i]>A[i+1]))
		{
			counter++;
		}
	}
	printf("%d\n",counter);

	return 0;
}