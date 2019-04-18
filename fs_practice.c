#include <stdio.h>
#include "fs_structs.h"
#include <stdlib.h>

// A simple filesystem


int main(void)
{
   TOC *newFS = NULL;
   int temp = 0;
   // Let's hope we have the memory for this...
   newFS = (TOC*) malloc(sizeof(TOC));
   printf("%d", newFS);
   
   if (newFS != NULL)
   {
      printf("malloc() worked.\n");
      scanf("%d", &temp); 
      return -1;
   }
   else
   {
      printf("malloc() failed.\n");
      return 0;
   }
}
   
   
   
