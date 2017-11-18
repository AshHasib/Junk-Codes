#include<bits/stdc++.h>

using namespace std;


bool isAnagram(string,string);


int main()
{
	string s1,s2;
	printf("Enter first string:");
	cin>>s1;
	printf("Enter second string:");
	cin>>s2;

	if(isAnagram(s1,s2)==true)
	{
		printf("Anagram\n");
	}
	else
	{
		printf("Not anagram\n");
	}
	return 0;
}

bool isAnagram(string s1,string s2)
{
	if(s1.length()!=s2.length())
	{
		return false;
	}
	unsigned i,j;
	bool flag=false;

	for(i=0;i<s1.length();i++)
	{
		flag=false;
		j=0;
		while(!flag && j<s2.length())
		{
			if(s1[i]==s2[j])
			{
				flag=true;
				s2[j]='\0';
			}
			j++;
		}
		if(!flag)
		{
			return false;
		}
	}
	return true;
}