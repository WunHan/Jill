#include<stdio.h>
#include<stdlib.h>
#define SIZE 9

int main(void)
{
	int array[SIZE]={1,0,0,0,3,7,0,0,0};
	int temp[SIZE]={0};
	int i, flag=0;
    
    //Option1
    for (i=0;i<SIZE;i++)
    {  
        if (array[i]!=0)
        {
            temp[flag]=array[i];
            flag++;
        }  
    }
    for (i=0;i<SIZE;i++)
        printf("array after sequence:array[%d]=%d\n", i, temp[i]);
	
	/* 
	//Option2
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
	    
	for (i=0;i<SIZE;i++)
	    printf("array after sequence: array[%d]=%d\n", i, array[i]);
	*/
	
	
}
