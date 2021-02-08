#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter value for Digit 1: ");
    scanf("%d", &a);
    printf("Enter value for Digit 2: ");
    scanf("%d", &b);
    printf("\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped values are\n");
    printf("Digit 1: %d \n", a);
    printf("Digit 2: %d \n",b);
    return 0;
}
