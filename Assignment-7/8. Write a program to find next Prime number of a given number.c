//8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
	int i,n,j,flag=0;
	printf("Enter the Number");
	scanf("%d",&n);
	for(i=n;1;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			flag=1;
		}
		if(flag==0)
		{
		
		  printf("%d ",i);
		  break;
	    }
	}
	return 0;
}
