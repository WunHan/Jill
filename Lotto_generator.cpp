/*=====================================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
05-07-16   Jill       Init version
                      Lotto generator
=====================================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define number 49          //How many number you want to choose
#define interval 6      //How large number you want to set up

int not_seen_before(int random_number, int seen[])
{
  for(int i=0; i<interval; i++)    
  {
    if (random_number==seen[i])
    {
      return 0;
    }
  }
  return 1;
}

int main(void)
{
	
	int i,random_number,pos=0;
	int seen[number]={0};
	
	unsigned seed;
    seed = (unsigned)time(NULL); // 取得時間序列
	srand(seed); // 以時間序列當亂數種子
	
    while(pos<interval)    
    {
      random_number=rand()%number+1;
      if (not_seen_before(random_number, &seen[0]))
      {      
        seen[pos]=random_number;
        pos+=1;
      }
    }
    
    for(i=0;i<interval;i++)
	{
		printf("array[%d]=%d\n",i,seen[i]);
	}
	
/*	
	for(i=0;i<number;i++)
	{		
		a=(rand()%number)+1;
		printf("a = %d\n",a);
	}
*/      
    return 0;
}

/*
array[0]=2
array[1]=27
array[2]=24
array[3]=25
array[4]=4
array[5]=19
*/
