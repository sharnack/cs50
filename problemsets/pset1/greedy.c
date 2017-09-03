#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    int cents;
    int coins = 0;
    
    // prompt user for amount of change in dollar
    do 
    {
        printf("O hai! How much change is owed?\n");
        dollar = get_float();
    }
    while (dollar <= 0.00);
    
    // convert dollar into cents
    dollar *= 100;
    dollar = round (dollar);
    cents = (int) dollar;
    
    while (cents >= 25)
    {
        coins++;
        cents -= 25;
    };
    
    while (cents >= 10)
    {
        coins++;
        cents -= 10;
    }
    
    while (cents >= 5)
    {
        coins++;
        cents -= 5;
    }
    
    while (cents >=1)
    {
        coins++;
        cents -= 1;
    }
    
    printf("%i\n", coins);
    
}