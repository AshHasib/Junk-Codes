#include<stdio.h>
#define MAX 100

int S[MAX];
int top=-1;

void push(int);
int pop();
void Display();

int main()
{
	int choice,N;
	printf("STACK_________________________\n");
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				printf("Enter an element:");
				scanf("%d",&N);
				push(N);
				break;
			}
			case 2:
			{
				N=pop();
				if(N==-99999)
				{
					printf("Stack empty.Pop Operation failed\n");
				}
				else
				{
					printf("Succesfully popped %d from the stack\n",N);
				}
				break;
			}
			case 3:
			{
				Display();
				break;
			}
			case 4:
			{return 0;}

			default:
			{
				printf("Invalid choice ,try again\n");
			}
		}
	}
	return 0;
}
void push(int num)
{
	if(top==MAX-1)
	{
		printf("Stack full\n");
		return;
	}
	top++;
	S[top]=num;
	printf("Push Operation successful\n");

}
int pop()
{
	if(top==-1)
		return -99999;

	return S[top--];
}

void Display()
{
	int i;
	if(top==-1)
	{
		printf("STACK EMPTY\n");
		return ;
	}

	printf("STACK:");
	for(i=top;i>=0;i--)
	{
		printf("%d\t",S[i]);
	}
	printf("\n");
}