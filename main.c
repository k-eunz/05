#include <stdio.h>

int main(void)
{
    int num;
    int sum=0;
    int i;
    
    printf("Input a integer:");
    scanf("%i", &num);

    for(i=0;i<num;i++)
    {
    sum = sum + i + 1;
    }
    
    printf("sum result is %i\n",sum);
    
    return 0;
}