/*=====================================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
05-07-16   Jill       Init version
                      Arrange the number in the array, 
					  put the non-zero number in the front and all zero in the end
=====================================================================================*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 9

int main(void)
{
	int array[SIZE]={1,0,2,0,3,7,0,4,0};
	int temp[SIZE]={0};
	int i, flag=0;
    
    //Option1, use temp array to help exchange number 
    for (i=0;i<SIZE;i++)
    {  
        if (array[i]!=0)
        {
            temp[flag]=array[i];
            flag++;
        }  
    }
    printf("array after sequence:");
    for (i=0;i<SIZE;i++)
        printf("  %d", temp[i]);
	
	/* 
	//Option2, only use array itself to exchange number 
	for (i=0;i<SIZE;i++)
	{		
		if (array[i]!=0)
		{
			array[flag]=array[i];
			flag++;
			printf("flag=%d\n", flag);
		}		
	}	
	for(i=flag;i<SIZE;i++)
	    array[i]=0;
	
	printf("array after sequence:");    
	for (i=0;i<SIZE;i++)
	    printf("  %d", array[i]);
	*/
}

/*
array after sequence:  1  2  3  7  4  0  0  0  0
*/
