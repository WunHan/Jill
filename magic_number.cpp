/*=====================================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
05-07-16   Jill       Init version
                      Plus the input number bit by bit until output is one bit
					  EX:input=158->1+5+8=14->1+4=5
=====================================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int input = 126;
	
	int input;
	printf("Please enter a non negative number: ");
	scanf("%d", &input);
	while(input<0)
	{
		printf("You enter a unavaliable value.\n");
		printf("Please enter a non negative number again:");
		scanf("%d", &input);
	}
	
	int output = input%9;	
	if (output==0 && input!=0)
	output+=9;

	printf("The magic number of %d is %d\n", input, output);	
}

/*
Please enter a non negative number: 13579
The magic number of 13579 is 7
*/
