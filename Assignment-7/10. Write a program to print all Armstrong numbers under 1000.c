//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
	int r,n,x,arm=0;
	for(n=1;n<=1000;n++)
	{
	arm=0;
	x=n;
	while(x!=0)
	{
		r=x%10;
		arm=arm+r*r*r;
	    x=x/10;
	}
	if(arm==n)
      	printf("%d " ,n);
   }
	return 0;
}
