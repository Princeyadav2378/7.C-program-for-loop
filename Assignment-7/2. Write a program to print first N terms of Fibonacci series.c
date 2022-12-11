
#include<stdio.h>
int main()
{
	int i,n,prev=-1,cur=1,next=0;
	printf("Enter a Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	next=prev+cur;
	prev=cur;
	cur=next;
    }
	printf("%d ",next);
	return 0;
}
