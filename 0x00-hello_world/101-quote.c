#include <unistd.h>
/**
* main - print the size of various types
*
* Description: prints the size of various types on the computer it is compiled
* and run on
*
* Return: Always 0 (Success)
*/


#include <unistd.h>

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);  // 59 characters in the message
return 1;
}
