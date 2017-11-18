#include<iostream>
using namespace std;

int main()
{
	int N;
	cout<<"Enter size of the array:";
	cin>>N;

	int i,j,A[N],tmp;

	cout<<"Enter elements:";

	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	//performing selection sort

	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(A[i]>A[j])
			{
				tmp=A[i];
				A[i]=A[j];
				A[j]=tmp;
			}
		}
	}

	cout<<"SORTED LIST:";

	for(i=0;i<N;i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;

	return 0;
}