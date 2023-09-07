#include <stdio.h>
int main(){
    int ans;

    while (1)
    {
        printf ("\n2 * 3 = ?\nANS : "); scanf("%d",&ans);
        if(ans==6){
            printf ("\nYeah !!!! ");
            break;
            } else
                printf ("\nwrong ;-;");   
    }
return 0;
}