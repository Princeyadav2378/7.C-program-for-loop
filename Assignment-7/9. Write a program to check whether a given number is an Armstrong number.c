//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
	int i,n,temp,sum=0;
	printf("Enter the Number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		i=n%10;
		sum=sum+(i*i*i);
		n=n/10;
	}
	if(temp==sum)
		printf("Armstrong Number");
	else
	    printf("Not Armstrong Number");
	return 0;
}
