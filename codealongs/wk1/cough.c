#include <stdio.h>
#include <cs50.h>

void cough(int n);
void sneeze(int n);
void say(string s, int n);

int main(void)
{
    //call function cough()
    cough(3);
    sneeze(3);
}

void cough(int n)
{
    //call function say()
    say("cough", n);
}

void sneeze(int n)
{
    //call function say()
    say("achoo",n);
}

void say(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s);
    }
}