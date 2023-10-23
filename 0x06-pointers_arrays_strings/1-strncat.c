#include "main.h"
#include <stdio.h>
/**
*_strncat - function that concatenates two strings. it will use
* at most n bytes from src. src does not need to be null terminated.
* @author: muhabeid
* @dest: pointer to destination string.
* @src: pointer to source string.
* @n: number of bytes to be concatenated.
*
*Return: pointer to destination string.
*/
char*_strncat(char*dest,const char*src,intn)
{
intdest_len=0;
intsrc_len=0;
while(dest[dest_len]!='\0')
{
dest_len++;
}
while(src[src_len]!='\0'&&src_len<n)
{
src_len++;
}
for(inti=0;i<src_len;i++)
{
dest[dest_len+i]=src[i];
}
dest[dest_len+src_len]='\0';
returndest;
}
