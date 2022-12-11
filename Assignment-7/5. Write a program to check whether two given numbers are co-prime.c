//5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
	int i,a,b,hcf;
	printf("Enter the Number");
	scanf("%d %d",&a,&b);
	int min=a<b?a:b;
	for(i=1;i<=min;i++)
	{
		if((a%i==0)&&(b%i==0))
		 {
		 	hcf=i;
		 }
	}
		 if(hcf==1)
		 {
		    printf("%d and %d is co-prime",a,b);
		 }
		 else
		 {
		    printf("%d and %d is Not co-prime",a,b);
		 }
	return 0;
}
