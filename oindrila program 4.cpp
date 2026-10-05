/* write a c program to calculate sum of digits*/
#include<stdio.h>
int main()
{
	int num,digit,sum=0;
	printf ("enter the num:");
	scanf ("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		sum=sum+digit;
	}
	printf("sum of digit:%d",sum);
	return 0;
}
