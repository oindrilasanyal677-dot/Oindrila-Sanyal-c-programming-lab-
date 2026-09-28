#include<stdio.h>
int main()
{
	int i=1,n,sum=0,term=2;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("sum of the series= %d",sum);
	return 0;
}

