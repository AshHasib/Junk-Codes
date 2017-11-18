#include<bits/sdc++.h>

using namespace std;

int LIS(int a[],int size);

int main()
{
	int N,i;
	cout<<"Enter size of the array:";
	cin>>N;
	int A[N];
	cout<<"Enter elements:";
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	int res=LIS(A,N);
	cout<<"The longest increasing subsequence length is:"<<res<<endl;

	return 0;
}
int LIS(int a[],int size)
{
	int list[size];
	int i,j,max=0;

	//list[]={1};
	for(i=0;i<size;i++)
		list[i]=1;

	for(i=1;i<size;i++)
	{
		for(j=0;j<i;j++)
		{
			if((a[i]>a[j])&&(list[i]<list[j]+1))
			{
				list[i]=list[j]+1;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		if(max<list[i])
			max=list[i];
	}
	return max;
}
