#include<bits/stdc++.h>

using namespace std;

int main()
{	
	bool flag=false;

	int N;
	cin>>N;
	int A[N],i;
	int key;
	int high,low,mid;

	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	cin>>key;

	low=0;
	high=N;

	while(low<=high)
	{
		mid=(low+high)/2;

		if(A[mid]==key)
		{
			flag=true;
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
	if(flag==true)
	{
		cout<<"DATA FOUND\n";
	}
	else
	{
		cout<<"DATA NOT FOUND\n";
	}

	return 0;
}