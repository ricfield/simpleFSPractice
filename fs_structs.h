typedef struct fileChunk
{
   unsigned int data;
   struct chunk *prev;
   struct chunk *next;
} chunk;

typedef struct file
{
   char name[255];
   chunk *startOfData;
} fileHeader;

typedef struct tableOfContents
{
   fileHeader files[20000]; 
} TOC;

