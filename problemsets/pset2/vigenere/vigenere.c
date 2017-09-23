#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[]) {

    //check user input if more or less than two arguments
    if (argc != 2) {
        printf("Error!\n");
        return 1;
    }

    //check if key is only alphabetical
    for (int i = 0, n = strlen(argv[1]); i < n; i++) {
        if (!isalpha(argv[1][i])) {
            printf("Error!\n");
            return 1;
        }
    }

    //get plaintext
    printf("plaintext: ");
    string p = get_string();

    printf("ciphertext: ");


    //START ENCRYPTION

    //store key in variable k
    string k = argv[1];
    //store length of key in variable keylength
    int klength = strlen(k);
    //make key all lowercase
    for (int i = 0; i < klength; i++) {
        k[i] = tolower(k[i]);
    }

    //variable for current instance of cipher
    int c;
    //iterate over plaintext
    for (int i = 0, j = 0, n = strlen(p); i < n; i++) {
        //check if current iteration is alphabetical
        if (isalpha(p[i])) {
            //get current instance of key
            int kcurrent = k[j % klength] - 97;

            // check for uppercase
            if(isupper(p[i])) {
                c = (((p[i] - 65) + kcurrent) % 26) + 65;
                printf("%c", c);
                j++;
            }
            // when lowercase
            else {
                c = (((p[i] - 97) + kcurrent) % 26) + 97;
                printf("%c", c);
                j++;
            }
        }
        else {
            printf("%c", p[i]);
        }
    }

    printf("\n");
    return 0;

}