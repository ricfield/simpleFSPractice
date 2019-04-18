#include <stdio.h>

typedef struct tableOfContents
{
	file *files[20000]; 
} TOC;

typedef struct file
{
	char name[255];
	fileChunk *startOfData;
} fileHeader;

typedef struct fileChunk
{
	int data;
	fileChunk *prev;
	fileChunk *next;
} chunk;

