#include <stdio.h>
#include <cs50.h>

//tell the compiler that this function will appear later in the code
//if not put up here, error while compiling
void print_name(string name); 

int main(void)
{
    string s = get_string();
    print_name(s);
}

void print_name(string name)
{
    printf("hello, %s\n", name);
}