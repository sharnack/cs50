#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string name = get_string();
    
    //print first character an capitalize it
    printf("%c", toupper(name[0]));
    
    //iterate through string and find characters after space
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    
    printf("\n");
}