#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
void main()
{
char ch, filename[20];
FILE *fptr;
printf("Enter the Filename: ");
scanf("%s", &filename);
fptr = fopen(filename, "r");
if (fptr == NULL) 
{
printf("File not found!");
exit(0);
}
while ((ch=fgetc(fptr))!=EOF)
{
putchar(ch);
}
fclose(fptr);
}
