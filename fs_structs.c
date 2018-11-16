struct tableOfContents

{
	// FS attributes would go here.

	// The array is the maximum number of files in this FS example.
	// In this example, it is 20,000.
	file *files[20000];
  

}

struct fileChunk
{
	int data;
	fileChunk *prev;
	fileChunk *next;
}



struct file
{
	char name[255];
	fileChunk *startOfData;
}
