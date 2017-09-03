#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user for length of shower
    printf("Minutes: ");
    int i = get_int();
    
    // print equivalent bottles of water
    printf("Bottles: %i\n", i * 12);
}