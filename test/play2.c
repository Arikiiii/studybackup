#include <stdio.h>
int FuncPrice (int price,int amount);
int main(){
    int amoutItem=0;
    printf(" Enter your Amout item : ");scanf("%d",&amoutItem);
    int Unit[amoutItem],priceUnit[amoutItem];
    for (int i = 0; i < amoutItem; i++){
        printf("Amount Item [%d] : ",i+1);scanf("%d",&Unit[i]); 
        printf("Item price  [%d] : ",i+1);scanf("%d",&priceUnit[i]);
    }
    printf("\n\n========================================\n");
    for (int i = 0; i < amoutItem; i++){
        printf("item [%d] %d * %d \t= %d Bath \n",i+1,priceUnit[i],Unit[i],FuncPrice(priceUnit[i],Unit[i]));
    }
    printf("========================================\n");
    printf(Total )
    return 0;
}  


int FuncPrice (int price,int amount) {
return price*amount;
}
