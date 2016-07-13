/*===============================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
05-07-16   Jill       Init version
                      Calculate how many "1" if the number change to binary				
===============================================================================*/

#include<stdio.h>
#include<stdlib.h>

//calculate how many "1" if the number change to binary and return to main function
int distinguish(int value)
{
	int flag=1;
	
	if(value!=0)
	{
		while(value!=1)
        {
		if((value%2)==1)
		    {
		    flag++;
		    value/=2;
		    }
		else
		    value/=2;
	    }
	return flag;    
	printf("flag=%d\n",flag);
	}
	else
	return flag=0;
}

int main(void)
{		
	int number;
	printf("Please enter a non negative number: ");
	scanf("%d", &number);
	while(number<0)
	{
		printf("You enter a unavaliable value.\n");
		printf("Please enter a non negative number again:");
		scanf("%d", &number);
	}
	
	int array[number];
	int i;
	for(i=0;i<number+1;i++)
	{
		array[i]=distinguish(i);
	}
	
	for(i=0;i<number+1;i++)
	{
		printf("array[%d]=%d\n",i,array[i]);
	}
	
}

/*
Please enter a non negative number: 6
array[0]=0
array[1]=1
array[2]=1
array[3]=2
array[4]=1
array[5]=2
array[6]=2
*/
