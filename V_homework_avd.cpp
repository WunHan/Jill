#include <stdio.h>
#include <stdlib.h>


int addnumbers( int num)
{			
  int result = 0;
  
  if (num>0)
  {
  	result = addnumbers(num/10)+num%10;
  	if (result>9)
  	result = result/10 + result%10;
    return result;
  }  	   
  else
    return 0;
}

int main()
{
  int input = 13579;
  int output = 0;

  output = addnumbers(input);
  
  printf("The magic number of %d is %d\n", input, output);
}

