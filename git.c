#include<stdio.h>
int main(void)
{
    float x,*p;
    p=&x;
    printf("Enter the value:\n");
    scanf("%f",p);
    printf("printing value and address using pointer x=%f,address=%p\n",*p,p
    printf("Happy ending yaal lee");
	printf("\n");
	return 0;
}