#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for(int i = 65; i < 65 + 26; i++)
    {
        // by typecasting and explicitly telling the program to do so
        printf("%c is %i\n", (char) i, i);
        
        // printf itself can implicitly cast the int to a number by the specified placeholder
        printf("%c is %i\n", i, i);
    }
}