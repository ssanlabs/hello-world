#include<stdio.h>
#define size 50
void fibonacci(unsigned int *p);
int main(void)
{
	unsigned int n;
	unsigned int *p=&n;
	printf("Enter the range:\n");
	scanf("%i",&n);
	fibonacci(p);
	printf("\n");
	return 0;
}
void fibonacci(unsigned int *p)
{
	unsigned int n=*p;
	unsigned int a[size];
	a[0]=0;
	a[1]=1;
	for(int i=1;i<=n;i++)
	{
		a[i+1]=a[i]+a[i-1];

	}
	printf("The fibonacci sequence is:\n");
	for(int j=1;j<=n;j++)
	{
		printf("%u, %i\n",a[j],a[j]%7);
	}
}