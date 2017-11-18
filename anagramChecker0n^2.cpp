#include<bits/stdc++.h>

using namespace std;

bool isAnagram(string s1,string s2);

int main()
{
	string s1,s2;
	cout<<"Enter 1st string:";
	cin>>s1;
	cout<<"Enter another string:";
	cin>>s2;

	if(isAnagram(s1,s2)==true)
	{
		cout<<"Anagram\n";
	}
	else
	{
		cout<<"Not anagram\n";
	}
	return 0;
}
bool isAnagram(string s1,string s2)
{
	if(s1.length()!=s2.length())
	{
		return false;
	}
	for(int i=0;i<s1.length();i++)
	{
		bool found=false;
		int j;

		while(!found && j<s2.length())
		{
			if(s1[i]=s2[j])
			{
				found=true;
				s2[j]='\0';
			}
			j++;
		}
		if(!found) return false;
	}
	return true;
}