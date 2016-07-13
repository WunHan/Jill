/*=====================================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
05-07-16   Jill       Init version
                      Exchange numbers, EX:a=b, b=c, c=d, d=a
=====================================================================================*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=1,b=2,c=3,d=4;
	
	a=a^b^c^d;
	b=a^b^c^d;
	c=a^b^c^d;
	d=a^b^c^d;
    a=a^b^c^d;
		
	printf("a=%d, b=%d, %d, d=%d",a,b,c,d);	
}

/*
a=4, b=1, 2, d=3
*/
