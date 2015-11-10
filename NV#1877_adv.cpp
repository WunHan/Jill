#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 8 //the number of channel-1

int main(void)
{
	int i,sh,sum_1=0,sum_2=0;
	char ch;
	struct data
    {
	    char name[20];
    	int value;
    };
	
	struct data string[10]=
	{
		{"GSM850",7},
		{"EGSM",8},
		{"DCS1800",19},
		{"PCS1900",21},
		{"WCDMA_B1",22},
		{"WCDMA_B2",23},
		{"WCDMA_B4",25},
		{"WCDMA_B5",26},
		{"WCDMA_B8",49} 
	};	
	
	for(i=0;i<=MAX;i++)
	{
		printf("%s: ",string[i].name);
		ch=getche();
        printf("\n");
        if(string[i].value!=49)
        {
        	switch (ch)
            {
           	    case 'y':
         	  	    sh=(1<<string[i].value);
        	    break;
        	    case 'n':
        		    sh=(0<<string[i].value);
        	    break;
		    }
		    if(string[i].value==8)
		    {
		    	sh=sh|(1<<9);
			}
            sum_1=sum_1|sh; 
            //printf(" A = %x\n",sum_1);
		}
		else
		{
			switch (ch)
            {
           	    case 'y':
         	  	    sh=(1<<string[i].value);
        	    break;
        	    case 'n':
        		    sh=(0<<string[i].value);
        	    break;
		    }
            sum_2=sum_2|sh;
            //printf(" A = %x\n",sum_2);
		}
	}
	printf(" A = %x%08x\n",sum_2,sum_1);	
	
}
