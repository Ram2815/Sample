#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter the natural numbers");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
		sum+=i;
	printf("The sumk of n natural numbers is %d",sum);
}

