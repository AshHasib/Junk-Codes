#include<stdio.h>
void quickSort(int*,int, int);
int main()
{
	int A[1000];
	int N,i;
	printf("Enter the size of the array:");
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("performing quicksort.....................\n");
	quickSort(A,0,N-1);

	printf("Sorted array:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");

	return 0;
}
void quickSort(int *a,int l,int u)
{
	int pivot,nextp,left,right;

	left=l;
	right=u;
	pivot=a[left];
	while(l<u)
	{
		while(a[u]>=pivot &&(l<u))
		{
			u--;
		}
		if(l!=u)
		{
			a[l]=a[u];
			l++;
		}

		while(a[l]<=pivot&&(l<u))
		{
			l++;
		}

		if(l!=u)
		{
			a[u]=a[l];
			u--;
		}
	}
	a[l]=pivot;
	nextp=l;
	l=left;
	u=right;
	if(l<nextp)
		quickSort(a,l,nextp-1);
	if(u>nextp)
		quickSort(a,nextp+1,u);
}