#include <stdio.h>
#include "fs_structs.h"

// A simple filesystem


int main(void)
{
   TOC *newFAT = NULL;
   
   // Let's hope we have the memory for this...
   newFAT = (TOC*) malloc(sizeof(TOC));
   if (newFAT == NULL)
   {
      return -1;
   }
   else
   {
      return 0;
   }
}
   
   
   
