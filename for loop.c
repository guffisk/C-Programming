#include<stdio.h>

int main()
{
int i;
int j;
int a;
int k=0;

printf("Enter the number whose table needs to be displayed");
scanf("%d",&a);
printf("The Table of %d is \n",a);
for(i=a;i<=a;i++)
{
	for(j=1;j<=12;j++)
	{
		printf("%d x %d = %d \n",i,j,i*j);
	}
}
 return 0;
}
