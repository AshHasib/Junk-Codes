#include<stdio.h>

int main()
{
	int A[1000];
	int N,i;
	int k,p;

	printf("Enter size of the array:");
	scanf("%d",&N);

	printf("Enter elements:");
	for(i=1;i<=N;i++)
	{
		scanf("%d",&A[i]);
	}

	printf("Enter new element:");
	scanf("%d",&p);

	printf("Enter position:");
	scanf("%d",&k);

	for(i=N;i>=k;i--)
	{
		A[i+1]=A[i];
	}
	N+=1;
	A[k]=p;

	printf("New array:");
	for(i=1;i<=N;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");

	return 0;
}