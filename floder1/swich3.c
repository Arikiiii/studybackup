#include <stdio.h>
int main(){
    int price1=40,price2=80,price3=10,total_price=0,p1,p2,p3;
    char menu1,menu2,menu3;
    printf("\tMenu\n");printf("1) Papaya Salad\t\tprice %d bath\n",price1);
    printf("2) Grilled Chicken\tprice %d bath\n",price2);printf("3) Sticky Rice\t\tprice %d bath\n",price3);
    printf("\nEnter Menu Number  :");scanf("%c %c %c", &menu1,&menu2,&menu3);
    printf("\n--------------------------------------------\n");
    switch (menu1){
    case '1':case 'a': case 'A':printf("Your order is Papaya Salad\tprice %d bath\n",price1);p1=price1;break;
    case '2':case 'b': case 'B':printf("Your order is Grilled Chicken\tprice %d bath\n",price2);p1=price2;break;
    case '3':case 'c': case 'C':printf("Your order is Sticky Rice\tprice %d bath\n",price3);p1=price3;break;
    default: printf("Incorrect order\n");}
    switch (menu2){
    case '1':case 'a': case 'A':printf("Your order is Papaya Salad\tprice %d bath\n",price1);p2=price1;break;
    case '2':case 'b': case 'B':printf("Your order is Grilled Chicken\tprice %d bath\n",price2);p2=price2;break;
    case '3':case 'c': case 'C':printf("Your order is Sticky Rice\tprice %d bath\n",price3);p2=price3;break;
    default: printf("Incorrect order\n");}
    switch (menu3){
    case '1':case 'a': case 'A':printf("Your order is Papaya Salad\tprice %d bath\n",price1);p3=price1;break;
    case '2':case 'b': case 'B':printf("Your order is Grilled Chicken\tprice %d bath\n",price2);p3=price2;break;
    case '3':case 'c': case 'C':printf("Your order is Sticky Rice\tprice %d bath\n",price3);p3=price3;break;
    default: printf("Incorrect order\n");}
    total_price=p1+p2+p3;
    printf("--------------------------------------------");
    printf("\nTotal price : % d + %d + % d = %d Bath",p1,p2,p3,total_price);
    printf("\n--------------------------------------------");
    return 0;
}
