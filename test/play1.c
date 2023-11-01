#include <stdio.h>
int main(){
    int price1=40,price2=80,price3=10,total_price,i,p[3];
    char menu[3];
    printf("\tMenu\n");
    printf("1) Papaya Salad\t\tprice %d bath\n",price1);
    printf("2) Grilled Chicken\tprice %d bath\n",price2);
    printf("3) Sticky Rice\t\tprice %d bath\n",price3);
    for ( i= 0; i < 3; i++ ){
            printf("\nEnter Menu Number [%d]  :",i+1);
            scanf("%s",&menu[i]);
    }
    for (i = 0; i < 3; i++){
         switch (menu[i]){
            case '1':case 'a': case 'A':printf("Your order is Papaya Salad\tprice %d bath\n",price1);p[i]=price1;break;
            case '2':case 'b': case 'B':printf("Your order is Grilled Chicken\tprice %d bath\n",price2);p[i]=price2;break;
            case '3':case 'c': case 'C':printf("Your order is Sticky Rice\tprice %d bath\n",price3);p[i]=price3;break;
        default: printf("Incorrect order\n");p[i]=0;
        }
    }
    total_price=p[0]+p[1]+p[2];
    printf("--------------------------------------------");
    printf("\nTotal price : % d + %d + % d = %d Bath",p[0],p[1],p[2],total_price);
    printf("\n--------------------------------------------");
return 0;
}
int Func_ (int x,int y ){
    
}
   
