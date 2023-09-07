#include <stdio.h>
int main (){
    int start,end,base;
    printf("Enter base :");scanf("%d",&base);
    printf("Enter Start :");scanf("%d",&start);
    printf("Enter end :");scanf("%d",&end);
    for (start;start>=end;start--){
        printf ("%d*%d = %d\n",base,start,base*start);  
    }
    return 0;
}