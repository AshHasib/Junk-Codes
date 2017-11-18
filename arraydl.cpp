#include<stdio.h>

int main()
{
	int A[1000];
	int N,i;

	int k;

	printf("Enter size of the array:");
	scanf("%d",&N);

	printf("Enter elements:");
	for(i=1;i<=N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter position to delete:");
	scanf("%d",&k);

	for(i=k;i<=N;i++)
	{
		A[i]=A[i+1];
	}
	N-=1;
	printf("New array:");

	for(i=1;i<=N;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");

	return 0;
}