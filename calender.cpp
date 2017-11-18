#include<bits/stdc++.h>
using namespace std;

int main()
{
	printf("Welcome to my Calender app. This is a simple demonstration of if-else \n");
	printf("else if statements. You just have to give input today's date \n");
	printf("to see tomorrow's.");
	printf("\nEnter date(DD/MM/YYYY):");
	int day,month,year;
	int dayN,monthN,yearN;
	scanf("%d/%d/%d",&day,&month,&year);

	if(month==1||month==3||month==5||month==7||month||8||month==10)
	{
		if(day==31)
		{
			dayN=1;
			monthN=month+1;
			yearN=year;
		}
		else
		{
			dayN=day+1;
			monthN=month;
			yearN=year;
		}
		printf("Tomorrow's date :%d/%d/%d\n",dayN,monthN,yearN);
	}
	if(month==4||month==6||month==9||month==11)
	{
		if(day==30)
		{
			dayN=1;
			monthN=month+1;
			yearN=year;
		}
		else
		{
			dayN=day+1;
			monthN=month;
			yearN=year;
		}
		printf("Tomorrow's date :%d/%d/%d\n",dayN,monthN,yearN);
	}
	if(month==12)
	{
		if(day==31)
		{
			dayN=1;
			monthN=1;
			yearN=year+1;
		}
		else
		{
			dayN=dayN+1;
			monthN=month;
			yearN=year;
		}
		printf("Tomorrow's date :%d/%d/%d\n",dayN,monthN,yearN);
	}
	if(month==2)
	{
		printf("Flag\n");
		if((year%4==0)||(year%100!=0 && year%400==0))
		{
			if(day==29)
			{
				dayN=1;
				monthN=month+1;
				yearN=year;
				printf("Tomorrow's date :%d/%d/%d\n",dayN,monthN,yearN);
			}
			else
			{
				dayN=dayN+1;
				monthN=month;
				yearN=year;
				printf("Tomorrow's date :%d/%d/%d\n",dayN,monthN,yearN);
			}
		}
		else
		{
			if(day==28)
			{
				dayN=1;
				monthN=month+1;
				yearN=year;
				printf("Tomorrow's date :%d/%d/%d\n",dayN,monthN,yearN);
			}
			else
			{
				dayN=day+1;
				monthN=month;
				yearN=year;
				printf("Tomorrow's date :%d/%d/%d\n",dayN,monthN,yearN);
			}
		}
		
	}
	return 0;
}