#include <stdio.h>
int kuy(int priceroom[]);
int main() {
int priceroom[4];
char home[10] =("happy house");
printf("%s\n",home);
for(int i=0; i<=3;i++){
    printf("ค่าห้อง[%d]",i+1);
        scanf("%d",&priceroom[i]);
            if(priceroom[i]<0){
                priceroom[i]*=-1;
    }
}
printf("----------------------------------------\n");
for(int i=0;i<=3;i++){
    printf("ค่าเช่า[%d]=%d\n", i+1,priceroom[i]);
}
    printf("\nรวม: %d ",kuy(priceroom));
return 0;
}
int kuy(int priceroom[]){
int total ; 
    for(int i = 0;i<=3;i++){
            total+=priceroom[i];
    }
return total;
}