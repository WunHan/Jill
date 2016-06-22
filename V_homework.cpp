#include <stdio.h>
#include <stdlib.h>


int main()
{
	
   int a=378;
   int i,b,c=3;
   
   do
   {
	  	  
   	  for (i=0;i<c;i++)
   	  {

   	  	b+=a%10;
   	  	a=a/10;
   	  	
   	  	printf("b = %d\n",b);
   	  	printf("a = %d\n",a);  	  	
	  }
	  
	c=--c;  
   	a=b;
   	b=0;
   	
   	printf("a = %d\n",a);
   	printf("b = %d\n",b);
   	printf("c = %d\n",c);

   	
   }while(c==2);

return a;

}
