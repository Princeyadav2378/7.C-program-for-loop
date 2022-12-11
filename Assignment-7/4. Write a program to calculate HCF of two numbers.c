//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
	int a,b,i,hcf=1;
	printf("Enter two Number");
	scanf("%d %d",&a,&b);
	int min=a<b?a:b;
	for(i=1;i<=min;i++)
	{
		if((a%i==0) && (b%i==0))
		 hcf=i;
	}
	printf("hcf is %d",hcf);
	return 0;
}
