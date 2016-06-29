#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input = 126;
	int output = input%9;
	
	if (output==0 && input!=0)
	output+=9;

	printf("The magic number of %d is %d\n", input, output);
	
}
