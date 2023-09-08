#include <stdio.h>
int main (){
    int num1;
    printf("2 * 3 = ? \nANS :"); scanf("%d",&num1);
    while (num1 != 6){
        printf("\nwrong!!\n");
        printf("\n2 * 3 = ? \nANS :"); scanf("%d",&num1);
    }
     printf("\nyeah!!");
     return 0;
}