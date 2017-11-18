#include<stdio.h>
int main()
{
	int A[1000];
	int N;
	int i,j,tmp;

	printf("Enter the size of array:");
	scanf("%d",&N);

	printf("Enter elements:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("perfroming bubblesort.................\n");

	for(i=N;i>1;i--)
	{
		//O(N)
		for(j=0;j<i-1;j++)
		{
			//O(N^2)
			if(A[j]>A[j+1])
			{
				tmp=A[j];
				A[j]=A[j+1];
				A[j+1]=tmp;
			}
		}
	}
	printf("SORTED ARRAY:\n");

	for(i=0;i<N;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");

	return 0;
}