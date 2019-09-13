#include<stdio.h>

float average(int num1, int num2)
{

	float avg;
	avg=(num1+num2)/2.0;
	return avg;
}

int main()
{
	int num1=0, num2=0;
	float c=0;
	printf("Enter the two numbers \n");
	scanf("%d %d",&num1,&num2);
	
	c=average(num1,num2);
	printf("The average of the numbers is %f",c);
	return 0;
}
