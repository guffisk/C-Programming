#include<stdio.h>
int add(int num1, int num2)
{
	int c;
	c=num1+num2;
	return c;
}
int sub(int num1, int num2)
{
	int c;
	c=num1-num2;
	return c;
}
int mul(int num1, int num2)
{
	int c;
	c=num1*num2;
	return c;
}
float mod(int num1 , int num2)
{
	float c;
	c=num1%num2;
	return c;
}

int main()
{
	int num1=0, num2=0;
	int n, result;
	printf("Welcome to Nabiha's Calculator\nThis Calculator is made by my dad who is learning to write functions and call them so he can send this to mommy\n");
	printf("Enter the first number\n");
	scanf("%d",&num1);
	printf("Enter the second number\n");
	scanf("%d",&num2);
	printf("You have choosen %d and %d \n",num1,num2);
	printf("Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Modulous \n");
	printf("Please select one of the options to perform appropriate arithmetic action\n");
	scanf("%d",&n);
	switch (n)
	{
	
		case 1:
			result=add(num1, num2);
			printf("The answer is %d \n",result);
			break;
		case 2:
			result=sub(num1, num2);
			printf("The answer is %d \n",result);
			break;
		case 3:
			result=mul(num1, num2);
			printf("The answer is %d \n",result);
			break;
		case 4:
			result=mod(num1, num2);
			printf("The answer is %f \n",(float)result);
			break;
			default:
			printf("Invalid Operation, Bye Bye");
			break;
	}
	return 0;
}

