#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char();
    
    //use single quotes for a single character, datatype char
    //C distinguishes between lower and uppercase so you have to make both possible
    if (c == 'y' || c == 'Y')
    {
        printf("yes\n"); //use double quotes for strings, more than one character
    }
    else if (c == 'n' || c == 'N')
    {
        printf("no\n");
    }
    else
    {
        printf("error\n");
    }
}