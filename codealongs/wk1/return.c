#include <stdio.h>
#include <cs50.h>


int square(int n);

int main(void)
{
    printf("x is: ");
    int x = get_int();
    printf("x^2 is: %i\n", square(x));
}

//int in front is the datatype that will be returned (output)
//int in the braces is the input
int square(int n)
{
    return n * n;
}