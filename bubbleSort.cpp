#include<iostream>

using namespace std;

int main()
{
	int A[1000];
	int N,i,j,tmp;
	cout<<"Enter size of the array:";
	cin>>N;
	cout<<"Enter elements:";
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	
	for(i=N;i>1;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				tmp=A[j];
				A[j]=A[j+1];
				A[j+1]=tmp;
			}
		}
	}
	
	cout<<"SORTED ARRAY:\n";
	for(i=0;i<N;i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
	return 0;
}	
