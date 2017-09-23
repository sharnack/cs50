// make an array of 100 Instances, where each number has its index as value

#include <stdio.h>

int main(void)
{
    int arr[100];

    for (int i = 0; i < 100; i++) {
        arr[i] = i;
        printf("%i\n", arr[i]);
    }
}