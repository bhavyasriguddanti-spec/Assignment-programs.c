
#include <stdio.h>
void main()
{
    float amount, discount = 0, delivery = 0, total;
    int member;

    printf("Enter order amount: ");
    scanf("%f", &amount);

    printf("Enter membership (1 for premium, 0 for regular): ");
    scanf("%d", &member);

    if (amount >= 500)
    {
        delivery = 0;

        if (member == 1)
        {
            discount = amount * 0.10;
        }
    }
    else
    {
        delivery = 50;
    }
    total = amount - discount + delivery;
    printf("Discount = %.2f\n", discount);
    printf("Delivery charge = %.2f\n", delivery);
    printf("Final amount = %.2f", total);
}
