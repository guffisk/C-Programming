#include<stdio.h>

int main()
{
	int i,j,a;

printf("This is a calculator\n");

printf("What operation would you like to perform?");
printf("1 Addition\n");
printf("2 Subtraction\n");
printf("3 Multiplication\n");
printf("4 Modulo\n");

scanf("%d",&a);
printf("Enter the two numbers");
scanf("%d %d",&i,&j);
switch(a)
{
	case 1: 
	printf("The additon of %d + %d = %d",i,j,i+j);
	break;
	case 2: 
	printf("The subtraction of %d - %d = %d",i,j,i-j);
	break;
	case 3: 
	printf("The multiplication of %d * %d = %d",i,j,i*j);
	break;
	case 4: 
	printf("The modulo of %d % %d = %d",i,j,i%j);
	break;
	default:
	printf("Invalid Input");
	break;
}
	return 0;
}
