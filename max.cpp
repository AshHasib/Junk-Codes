#include<iostream>
#include<climits>
using namespace std;
int maxSum(int a[],int size);

int main()
{
	int A[1000];
	int N;
	cout<<"Enter size of the array:";
	cin>>N;
	cout<<"Enter elements:";
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	int result=maxSum(A,N);

	cout<<"MAXIMUM SUBARRAY SUM:"<<result<<endl;

	return 0;
}

int maxSum(int a[],int size)
{
	int maxSum=INT_MIN,temp=0,i;

	for(i=0;i<size;i++)
	{
		temp+=a[i];

		if(temp>maxSum)
		{
			maxSum=temp;
		}

		if(temp<0)
		{
			temp=0;
		}
	}
	return maxSum;
}