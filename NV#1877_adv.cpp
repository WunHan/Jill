/*===========================================================================
                        EDIT HISTORY FOR MODULE
  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.
when        who       what, where, why
--------   ------     ----------------------------------------------------------
11-10-15   Jill       Init version
11-10-15   Victor     Refine this program
                      1. Add band_lut structure for easier maintainance
                      2. Add input_check mechanism
                      3. Add quit option
                       
===========================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef  unsigned long long uint64;
#define STRING_LEN  32


#define GSM_DCS_1800      (1UL <<  7)
#define GSM_EGSM_900      (1UL <<  8)
#define GSM_PGSM_900      (1UL <<  9)
#define GSM_850           (1UL << 19)
#define GSM_PCS_1900      (1UL << 21)
#define WCDMA_I_IMT_2000  (1UL << 22)
#define WCDMA_II_PCS_1900 (1UL << 23)
#define WCDMA_IV_1700     (1UL << 25)
#define WCDMA_V_850       (1UL << 26)
#define WCDMA_VIII_900    (1UL << 49)
#define WCDMA_IX_1700     (1UL << 50)


typedef struct
{
  char name[32];
  uint64 value;
}band_info_type;

band_info_type band_lut[] =
{
  { "GSM_DCS_1800",       GSM_DCS_1800},
  { "GSM_EGSM_900",       GSM_EGSM_900},
  { "GSM_PGSM_900",       GSM_PGSM_900},
  { "GSM_850",            GSM_850},
  { "GSM_PCS_1900",       GSM_PCS_1900},
  { "WCDMA_I_IMT_2000",   WCDMA_I_IMT_2000},
  { "WCDMA_II_PCS_1900",  WCDMA_II_PCS_1900},
  { "WCDMA_IV_1700",      WCDMA_IV_1700},
  { "WCDMA_V_850",        WCDMA_V_850},
  { "WCDMA_VIII_900",     WCDMA_VIII_900},
  { "WCDMA_IX_1700",      WCDMA_IX_1700},
};


int main(void)
{
	// int i,sh,sum_1=0,sum_2=0;
  int i = 0;
	char answer;
	char s[STRING_LEN];
  uint64 output = 0;
  int is_valid_answer = 0;
  int quit = 0;


  for(i=0; i<sizeof(band_lut); i++)
  {
    do // input check
    {
      is_valid_answer =1;
      printf("[%-14s]  Supported? ",band_lut[i].name);

      fgets(s, STRING_LEN, stdin);
      answer = tolower(s[0]);
      
      if(answer=='y')
      {
        output |=  band_lut[i].value;
        is_valid_answer = 1;
      }
      else if(answer=='n')
      {
        is_valid_answer = 1;
      }
      else if(answer=='q')
      {
        quit = 1;
        break;
      }
    } while(!is_valid_answer);
    
    if(1==quit)
    {
      break;
    }
  }
  printf("Vaule: %llu\n", output);

}
