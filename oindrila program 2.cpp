#include<stdio.h>
int main()
{
	int i=1,n,sum=0,term=1,d=1;
	printf("Enter a term:");
	scanf("%d",&n);
	while(i<=n)
{
	printf("%d\t",term);
	    sum=sum+term;
		term=term+d;
		d++;
		i++;
}
	printf("sum of the series= %d",sum);
	return 0;
}

