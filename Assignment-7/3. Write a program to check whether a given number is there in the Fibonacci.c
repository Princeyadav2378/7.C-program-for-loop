/*3. Write a program to check whether a given number is there in the Fibonacci
series or not.*/
#include<stdio.h>
int main()
{
	int i,n,prev=-1,cur=1,next=0;
	printf("Enter the Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		next=prev+cur;
		prev=cur;
		cur=next;
	if(next == n)
	{
		printf("Number found");
		break;
	}
	if(next>n)
	{
		printf("Not found");
		break;
	}
   }  
	return 0;
}
