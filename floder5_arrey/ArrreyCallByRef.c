#include <stdio.h>
void gradeCharArrFunc (float gradeFloatArr[8],char gradeCharArr[8]);
int main (){
    char MyName[100],MygradeChar[8];
    float MyGrade[8];
    printf("Enter your name :"); scanf("%s",MyName);
    printf("Enter your grade \n");
    int i ;
    for ( i = 0; i < 8; i++){
        printf("\nMy grade of course %d : ",i+1);
        scanf("%f",&MyGrade[i]);
    }
    gradeCharArrFunc(MyGrade,MygradeChar);
    printf("my name is %s ",MyName);
   for ( i = 0; i < 8; i++)
        printf("\nMy grade of course %d : %.1f ( %c )",i+1,MyGrade[i],MygradeChar[i]);
return 0;
}

void gradeCharArrFunc (float gradeFloatArr[8],char gradeCharArr[8]){
    int n;
	for (n = 0 ;n<8;n++){
		if(gradeFloatArr[n]==4){
			gradeCharArr[n] = 'A';
		}else if(gradeFloatArr[n]==3.5 || gradeFloatArr[n]==3){
			gradeCharArr[n] ='B';
		}else if(gradeFloatArr[n]==2.5 || gradeFloatArr[n]==2){
			gradeCharArr[n] ='C';
		}else if(gradeFloatArr[n]==1.5 || gradeFloatArr[n]==1){
			gradeCharArr[n] ='D';
		}else
			gradeCharArr[n] ='F';
	}
}