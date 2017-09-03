#include <stdio.h>
#include <cs50.h>

//declare function
bool valid_triangle(float a, float b, float c);

int main (void)
{
    printf("side x: \n");
    float x = get_float(); 
    
    printf("side y: \n");
    float y = get_float();
    
    printf("side z: \n");
    float z = get_float();
    
    valid_triangle(x, y, z);
}

//define function
bool valid_triangle(float a, float b, float c)
{
    if (a < 1 || b < 1 || c < 1)
    {
        printf("false\n");
        return false;
    }
    else
    {
        if (a + b < c || a + c < b || b + c < a)
        {
            printf("false\n");
            return false;
        }
        else
        {
            printf("true\n");
            return true;
        }
    }
}