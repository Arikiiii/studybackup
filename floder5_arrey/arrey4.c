#include <stdio.h>
int main (){
    char MyName[100];
    float MyGrade[8];
    printf("Enter your name :"); scanf("%s",MyName);
    printf("Enter your grade \n");
    int i ;
    for ( i = 0; i < 8; i++){
        printf("\nMy grade of course %d : ",i+1);
        scanf("%f",&MyGrade[i]);
    }

    printf("my name is %s ",MyName);
   for ( i = 0; i < 8; i++)
        printf("\nMy grade of course %d : %.1f",i+1,MyGrade[i]);

return 0;
}