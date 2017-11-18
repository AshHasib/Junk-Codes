#include<bits/stdc++.h>

using namespace std;

int main()
{
	char S[10000];
	int i;
	bool flag=true;

	printf("Enter your string:");
	scanf("%s",S);
	int len=strlen(S);
	for(i=0;i<len;i++)
	{
		if(S[i]!=S[len-i-1])
		{
			flag=false;
			break;
		}
	}
	if(flag==true)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}
	return 0;
}