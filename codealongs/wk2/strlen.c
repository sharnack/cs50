#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string();
    int n = 0;
    
    // as long as the nth character is not \0, increase n by 1
    // \0 is what the computer puts in the memory between strings
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}