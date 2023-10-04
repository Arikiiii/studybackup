#include <stdio.h>
int main()
{
    int menu;
    printf("\tMenu\n");printf("1) Papaya Salad\n");
    printf("2) Grilled Chicken\n");printf("3) Sticky Rice\n");
    printf("Enter Menu Number:");scanf("%d", &menu);
    printf("-----------------------------\n");
    switch (menu)
    {
    case 1:printf("Your order is Papaya Salad");break;
    case 2:printf("Your order is Grilled Chicken");break;
    case 3:printf("Your order is Sticky Rice");break;
    default: printf("Incorrect order");
    }
    printf("\n-----------------------------");
    return 0;
}
