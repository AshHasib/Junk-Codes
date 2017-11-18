#include<stdio.h>
int main()
{
	int A[1000];
	int N,key;
	int i,flag=0;

	printf("Enter size of the array:");
	scanf("%d",&N);

	printf("Enter elements:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter key value:");
	scanf("%d",&key);

	for(i=0;i<N;i++)
	{
		if(A[i]==key)
		{
			flag==1;
		}
	}
	if(flag==1)
	{
		printf("DATA FOUND\n");
	}
	else
	{
		printf("DATA NOT FOUND\n");
	}
	return 0;
}