/*===============================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
05-07-16   Jill       Init version
                      Distinguish the value whether is a unique number or not
					  If not, how many times it show
===============================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define SIZE 5
#define interval 10 //How large number you want to set up EX: random number will appear 1~10

//Generate the random number of array and return to main function
int *gen_array()
{
	static int output[SIZE];
	int i,*ptr;
	unsigned seed;
    seed = (unsigned)time(NULL); // 取得時間序列
	srand(seed); // 以時間序列當亂數種子
	
	for(i=0;i<SIZE;i++)
	{
		output[i]=(rand()%interval)+1;
	}				
	
	ptr = output;	
	return ptr;
}

int main(void)
{	
    //int array[SIZE]={0,1,3,3,7};  
	int *array;
	array=gen_array();
	  		
	int i,j,number=0;
	for(i=0;i<SIZE;i++)
	{
		printf("array[%d]=%d\n", i, array[i]);
	}	
	
	for(i=0;i<SIZE;i++)
	{	
		int same=0;
        for(j=i+1;j<SIZE;j++)
        {       
		    if(array[i]<0)
            break;
				
        	if(array[j]==array[i])
        	{
        		same++;
        		array[j]=-1;
			}    	
		}
		if (same==0 && array[i]>0)
		    printf("%d is a unique number.\n", array[i]);
		else if (same>0 && array[i]>0)
		    printf("%d has smae number and appears %d times.\n", array[i],same+1);
		else
		;
	
	//Option2: only array like [3,3,2] or [5,2,3,2,5] can use this way
	//number^=array[i];
	}		
	//printf("Unique number in array is %d\n", number);
}

/*
array[0]=1
array[1]=4
array[2]=4
array[3]=10
array[4]=10
1 is a unique number.
4 has smae number and appears 2 times.
10 has smae number and appears 2 times.
*/
