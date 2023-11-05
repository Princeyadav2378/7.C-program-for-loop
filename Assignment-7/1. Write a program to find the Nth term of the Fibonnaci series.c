//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
	int n,i,prev=-1,cur=1,next=0;
	printf("Enter a number");
	scanf("%d",&n);
	//printf("1 ");
	for(i=0;i<=n;i++)
	{
	next=prev+cur;
	printf("%d ", next);
	prev=cur;
        cur=next;
    }
    return 0;
}

