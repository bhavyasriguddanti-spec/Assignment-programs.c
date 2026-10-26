
#include <stdio.h>
void main()
{
    int a;

    printf("Enter a value: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Positive number");
    }
    else if (a < 0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }
}
