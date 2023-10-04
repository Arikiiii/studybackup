#include <stdio.h>
int main ()
{
 int i,grade,number=1,A=0,B=0,C=0,D=0,F=0;
for (i=0;i<5;i++){
     printf("Enter score [%d] : ",number++); scanf("%d",&grade);
     if (grade>=80)
         A++;
     else if (grade>=70)
         B++;
     else if (grade>=60)
         C++;
     else if (grade>=50)
         D++;
     else 
         F++ ;
}
printf("Grade A : %d\n",A);
printf("Grade B : %d\n",B);
printf("Grade C : %d\n",C);
printf("Grade D : %d\n",D);
printf("Grade F : %d\n",F);
    return 0;
}