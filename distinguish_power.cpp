#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 20

int distinguish(int value)
{
	int i,flag; 	
	/*------------------------
	int b[SIZE]={0};
	for (i=1;i<=SIZE;i++)
	{
		b[SIZE-i]=value%2;
		value/=2;
	}
	for (i=0;i<SIZE;i++)
	{
		printf("%d",b[i]);			
	}
	printf("\n");
	-----------------------*/
	while(value!=1)
    {
		flag=value%2;
		if (flag==1)
		return 0;
		else
		value/=2;
	}
	return 1;
}

int main(void)
{
	//int input=pow(2,8);
	//int input=0;
    int input;
	printf("Please enter a positive number: ");
	scanf("%d", &input);
	while(input<=0)
	{
		printf("You enter a unavaliable value.\n");
		printf("Please enter a positive number again:");
		scanf("%d", &input);
	}
	
	int output;      
	output=distinguish(input);
	
	if(1==output)
	printf("%d is power number by 2", input);
	else 
	printf("%d is not power number by 2", input);	   
}
