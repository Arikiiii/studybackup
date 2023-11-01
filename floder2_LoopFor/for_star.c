#include <stdio.h>
int main(){
   int round;
   printf("enter round");scanf("%d",&round);
   for(int i=0 ; i<=round;i++){
      for(int j=round;j>i;j--)
      printf(" ");
      for(int star=0;star<=i;star++)
      printf("*");

   printf("\n");
   }
return 0;
}