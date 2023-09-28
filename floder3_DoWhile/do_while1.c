#include<stdio.h>
int main()
{
    int mul , round,i=1 ;
    printf("Enter your mul :"); scanf("%d",&mul);
    printf("Enter your round :"); scanf("%d",&round);
    do
    {
      printf(" %d * %d = %d\n",mul,i,i*mul);
      i++;
    }
     while (i<=round);
    return 0;
}