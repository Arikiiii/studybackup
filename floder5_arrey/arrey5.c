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
}char gradeChar(float gradeFloat ){
    int i;
    for ( i = 0; i < 8; i++){
        if ( gradeFloat[i] == 4)
            return 'A';   
        else if  (MyGrade[i] == 3.5)
            return 'B+';
        else if  (MyGrade[i] == 3)
           return 'B';
        else if  (MyGrade[i] == 2.5)
              return 'C+';
        else if  (MyGrade[i] == 2)
            return 'C';
        else if  (MyGrade[i] == 1.5)
             return 'B';
        else if  (MyGrade[i] == 1)
             return 'B';
        else
           return 'B';
    }
}