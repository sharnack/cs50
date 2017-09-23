#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;

    do {
        printf("Height: ");
        h = get_int();
    } while (h < 0 || h > 23);


    for (int i = 0; i < h; i++) {

        for (int j = h - 1; j > i; j--) {
            printf(" ");
        }

        for (int k = 0; k < i; k++) {
            printf("#");
        }

        printf("#");
        printf("  ");
        printf("#");

        for (int l = 0; l < i; l++) {
            printf("#");
        }

        printf("\n");
    }
}