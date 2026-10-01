#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%i", &num);

    if (num > 0)
        printf("Absolute value : %i", num);
    else
        printf("Absolute value : %i", -num);

    return 0;
}
