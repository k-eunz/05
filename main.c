#include <stdio.h>

int main(void)
{
    int answer = 59;
    int input;
    int trial = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%i", &input);

        if (answer < input)
            printf("high!\n");
        else if (input < answer)
            printf("low!\n");

        trial++;
    }
    while (answer != input);

    printf("Congrautlaions! trial:%i\n",trial);

    return 0;
}
