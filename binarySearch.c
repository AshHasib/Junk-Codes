#include<stdio.h>
int main()
{
	int A[1000];
	int N,i,low,high,mid;
	int key;
	int flag=0;

	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	scanf("%d",&key);

	low=0;
	high=N-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(A[mid]==key)
		{
			flag=1;
			break;
		}
		else if(A[mid]<key)
		{
			low=mid+1;
		}
		else 
		{
			high=mid-1;
		}
	}
	if(flag==1)
	{
		printf("DATA FOUND\n");
	}
	else 
	{
		printf("DATA NOT DOUND\n");
	}
	return 0;
}