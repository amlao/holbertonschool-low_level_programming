#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main()
{
        char ch;
        for(ch = 'z'; ch >= 'a'; ch--)
        {
		putchar(ch);
        }
	putchar('\n');
        return(0);
}
