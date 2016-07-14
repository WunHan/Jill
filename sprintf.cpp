/*=======================================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
05-07-16   Jill       Init version
                      Change int to char
14-07-16   Jill       Change another way to create a function of trasfer int to char                       
=======================================================================================*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 11

int cal_flag(int input)
{
	int flag=0;
	while(input!=0)
	{		
		input/=10;
		flag+=1;		
    }		
    return flag;
}

char *int2char(int input)
{
	int temp, flag;
	static char output[SIZE];
	char *ptr;
	
	flag=cal_flag(input);
    
    while(input!=0)
    {
    	temp=input%10;
    	output[flag-1]=temp+48; //transfer int 0 -> char 0
    	input/=10;
    	flag-=1;
	}	
    ptr = output;    
    return ptr;
}

int main(void)
{
    char *str;
    int num=961406;

    str=int2char(num);
    
    printf("str=%s\n", str);
    printf("str[0] = %d\n", str[0]); //print ASCII of str[0]=9 is 57
    printf("str[0] = %c\n", str[0]); //print char of str[0]=9 
    printf("str[1] = %c\n", str[1]);
    printf("str[2] = %c\n", str[2]);
    printf("str[3] = %c\n", str[3]);
    printf("str[4] = %c\n", str[4]);
    printf("str[5] = %c\n", str[5]);

/*	
    //Option 2: use function sprintf trasfer int to char
	char str[11]; //sizeof(2^32=4294967296)=10+1(\0)=11
    int num = 961406;

    sprintf(str, "%d", num);
    printf("str = %s\n", str);
    printf("str[0] = %d\n", str[0]); //print ASCII of str[0]=9 is 57
    printf("str[0] = %c\n", str[0]); //print char of str[0]=9
    printf("str[1] = %c\n", str[1]);
    printf("str[2] = %c\n", str[2]);
    printf("str[3] = %c\n", str[3]);
    printf("str[4] = %c\n", str[4]);
    printf("str[5] = %c\n", str[5]);
*/   
}

/*
str = 961406
str[0] = 57
str[0] = 9
str[1] = 6
str[2] = 1
str[3] = 4
str[4] = 0
str[5] = 6
*/
