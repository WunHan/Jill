#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main(void)
{
	
int A,B,C,D,E,F,G,H,I;
//int sum_1,sum_2;
long long int sum_1;
char ch;

printf("/*------------------------------------------------------------------------*/\n");
printf("NV#1877 NV_RF_BC_CONFIG_I transfer\n");
printf("If band support, please answer: \"y\".\n");
printf("If no band support, please answer: \"n\".\n");
printf("/*------------------------------------------------------------------------*/");
printf("\n\n\n");


printf("GSM850:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		A=1;
	break;
	case 'n':
		A=0;
	break;
}

printf("EGSM:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		B=1;
	break;
	case 'n':
		B=0;
	break;
}

printf("DCS1800:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		C=1;
	break;
	case 'n':
		C=0;
	break;
}

printf("PCS1900:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		D=1;
	break;
	case 'n':
		D=0;
	break;
}

printf("WCDMA B1:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		E=1;
	break;
	case 'n':
		E=0;
	break;
}

printf("WCDMA B2:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		F=1;
	break;
	case 'n':
		F=0;
	break;
}

printf("WCDMA B4:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		I=1;
	break;
	case 'n':
		I=0;
	break;
}

printf("WCDMA B5:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		G=1;
	break;
	case 'n':
		G=0;
	break;
}

printf("WCDMA B8:");
ch=getche();
printf("\n");
switch(ch)
{
	case 'y':
		H=1;
	break;
	case 'n':
		H=0;
	break;
}

  //sum_1=(C<<7)|(B<<8)|(B<<9)|(A<<19)|(D<<21)|(E<<22)|(F<<23)|(I<<25)|(G<<26);
  //sum_2=(H<<17);
  
  printf("sizeof sum_1=%d\n",sizeof(sum_1));
  sum_1=(C<<7)|(B<<8)|(B<<9)|(A<<19)|(D<<21)|(E<<22)|(F<<23)|(I<<25)|(G<<26)|(H<<49);

  //printf(" A = %x%08x\n",sum_2,sum_1);
  //printf("B=0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x",
  //(sum_1>>0)&0xff,(sum_1>>8)&0xff,(sum_1>>16)&0xff,(sum_1>>24)&0xff,(sum_2>>0)&0xff,(sum_2>>8)&0xff,(sum_2>>16)&0xff);
  
  printf("B=0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x",
  (sum_1>>0)&0xff,(sum_1>>8)&0xff,(sum_1>>16)&0xff,(sum_1>>24)&0xff,(sum_1>>32)&0xff,(sum_1>>40)&0xff,(sum_1>>48)&0xff);


}
