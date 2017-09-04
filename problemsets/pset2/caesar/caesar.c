#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    else
    {
        // convert user input string into an int
        int k = atoi(argv[1]);
        // variable to store current cipher in while encrypting
        int c;
        // ask user for plaintext
        printf("plaintext: ");
        string p = get_string();

        printf("ciphertext: ");

        // iterate over plaintext
        for (int i = 0, n = strlen(p); i < n; i++) {

            // check if current instance of i is character
            if (isalpha(p[i])) {

                // encypher c[i] = (p[i] + k) % 26

                // check for uppercase
                if(isupper(p[i])) {
                    c = (((p[i] - 65) + k) % 26) + 65;
                    printf("%c", c);
                }
                // when lowercase
                else {
                    c = (((p[i] - 97) + k) % 26) + 97;
                    printf("%c", c);
                }
            }
            else {
                printf("%c", p[i]);
            }
        }
        printf("\n");
        return 0;
    }

}