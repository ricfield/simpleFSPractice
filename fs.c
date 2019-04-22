//Create a simple file with one block of data
void createSimpleFile(TOC *toc)
{
  toc->fileHeader[1].name = "aFile.txt";
  toc->startOfData.data = 12345;
}
