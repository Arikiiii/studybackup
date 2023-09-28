#include <stdio.h>
int main()
{
    int ans;
    do{
        printf("\n2 * 3 = ?\nANS : ");
        scanf("%d", &ans);
        if (ans == 6)
        {
            printf("\nYeah !!!! ");
            break;
        }
        else
            printf("\nwrong ;-;\n");
    } while (1);
    return 0;
}