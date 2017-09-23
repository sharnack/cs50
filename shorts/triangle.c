#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main (void)
{

    int a;
    int b;
    int c;

    printf("Please enter the length of each side of the Triangle.\n");

    do {
    printf("Side a: ");
    a = get_int();

    printf("Side b: ");
    b = get_int();

    printf("Side c: ");
    c = get_int();
    } while (a < 1 || b < 1 || c < 1);

    if ((a + b) < c || (a + c) < b || (c + b) < a) {
        printf("Not a valid triangle!\n");
        return false;
    } else {
        printf("Valid triangle!\n");
        return true;
    }
}