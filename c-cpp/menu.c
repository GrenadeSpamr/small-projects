#include <stdio.h>

main()
{
    int order, quantity, choice, cost, cash, change, total;

    menu:
    printf("Menu:\n 1.) Yum! Burger - 30 Php\n 2.) Chicken McDo - 99 Php\n 3.) Twister Fries - 50 Php\n 4.) Ultimate Burger Steak - 120 Php\n\n");

    printf("Order: ");
    scanf("%d", &order);

    payment:
    switch (order)
    {
        case 1 : cost = 30; break;
        case 2 : cost = 99; break;
        case 3 : cost = 50; break;
        case 4 : cost = 120; break;
        default : printf("Invalid order. Ordering all.\n"); cost = 299; break;
    }

    printf("Quantity: ");
    scanf("%d", &quantity);

    printf("\nAre you sure about your order\?\t 1.) Yes\t 2.) No\n");
    printf("Sureness: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1 : printf("\nItem %d x %d ordered.", order, quantity); break;
        case 2 : puts("\n"); goto menu; break;
        default : puts("Invalid choice."); goto menu; break;
    }



    total = cost * quantity;
    printf("\nAmount due: %d\n", total);
    printf("Enter cash: ");
    scanf("%d", &cash);

    if (cash >= total)
    {
        change = cash - total;
        goto receipt;
    }
    else
    {
        printf("Insufficient funds.\n\n");
        goto menu;
    }

    receipt:
    printf("\nReceipt:\n");
    printf("\tOrder: Item %d\n\tQuantity: x%d\n", order, quantity);
    printf("\tAmount Due: %d Php\n\tAmount Paid: %d Php\n", total, cash);
    printf("\tChange Received: %d Php\n", change);
    printf("\n\tHave a good day!\n");

    getchar();
    return 0;
}
