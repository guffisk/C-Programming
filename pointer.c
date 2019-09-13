#include<stdio.h>
void swap (int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int num1, num2;
	printf("Enter the first number");
	scanf("%d",&num1);
	printf("Enter the second number");
	scanf("%d",&num2);
	swap (&num1 , &num2);
	printf("Swapped number are %d %d",num1 , num2);
	
	return 0;
}




