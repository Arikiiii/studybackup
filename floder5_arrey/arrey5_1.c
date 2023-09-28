#include <stdio.h>
char gradeChar(float gradeFloat);
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
        printf("\nMy grade of course %d : %.1f ( %c )",i+1,MyGrade[i],gradeChar(MyGrade[i]));//        0dsfgsdfgsdfgsdfg
return 0;
}

char gradeChar(float gradeFloat) {
    if (gradeFloat == 4) {
        return 'A';
    } else if (gradeFloat == 3.5 || gradeFloat == 3) {
        return 'B';
    } else if (gradeFloat == 2.5 || gradeFloat == 2) {
        return 'C';
    } else if (gradeFloat == 1.5 || gradeFloat == 1) {
        return 'D';
    } else {
        return 'F';
    }
}
