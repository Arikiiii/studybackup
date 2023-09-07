#include <stdio.h>
int main(){
 	int i,j,star,row;
    printf("Enter Row : "); scanf("%d",&star);
 	for (i=1;i<=star;i++){
    		for(j=star;j>i;j--)
                printf(" ");
            for(row=1;row<=i;row++)
                printf("*");
    printf ("\n");
 	} 
 	return 0;
}
