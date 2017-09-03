#include <cs50.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command line argument!\n");
        //creating own error code so i, the programmer know, where something went wrong
        return 1;
    }
    
    printf("hello, %s\n", argv[1]);
    return 0;
}