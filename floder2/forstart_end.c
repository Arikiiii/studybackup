#include <stdio.h>
int main (){
    int start,end;
    printf("Enter Start :");scanf("%d",&start);
    printf("Enter end :");scanf("%d",&end);
    for (start;start<=end;start++){
        printf ("2*%d = %d\n",start,2*start);  
    }
    return 0;
}