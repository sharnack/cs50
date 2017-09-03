#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    //ask for and validate input
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);
    
    //build pyramid
    //loop as many times as user input n
    for (int i = 0; i < n; i++)
    {
        //print spaces
        //j is set to user input - 1
        //loop as long as j is bigger than i
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        
        //print hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        
        //print final hash
        printf("##\n");
    }
} 