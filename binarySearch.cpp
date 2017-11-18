#include<iostream>
using namespace std;

int main()
{
	int A[1000];
	int N,i,low,high,mid;
	int flag=0;
	int key;
	cout<<"Enter size of the array:";
	cin>>N;
	cout<<"Enter elements:";
	for(i=0;i<N;i++)
	{	
		cin>>A[i];
	}
	cout<<"Enter key value:";
	cin>>key;
	
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
			high=mid-1;
	}
	if(flag==1)
	{
		cout<<"ELEMENT FOUND\n";
	}
	else
		cout<<"ELEMENT NOT FOUND\n";
	
	return 0;

}
