#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	int rem,rev=0,tmp;
	printf("Enter the number:");
	scanf("%d",&num);
	tmp=num;

	do
	{
		rem=tmp%10;
		rev=(rev*10)+rem;
		tmp/=10;
	}while(tmp!=0);

	printf("%d\n",rev);
	if(rev==num)
	{
		printf("Palindrome\n");
	}
	else 
	{
		printf("Not palindrome\n");
	}
	return 0;
}