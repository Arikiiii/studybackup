#include <stdio.h>
int main (){
    int i,num[5]={3,5,7,9,11};
    float numf[5]={ 0.3,0.5,0.9,0.7,0.11};
    double numD[5]={0.33,0.55,0.77,0.99,0.1111};
    char str[5]={'A','B','C','D'};
    for ( i = 0; i<5; i++)
        printf("num[%d] = %d \n",i,num[i]);
    for ( i = 0; i<5; i++)
        printf("numf[%d] = %.2f \n",i,numf[i]);
    for ( i = 0; i<5; i++)
        printf("numD[%d] = %.4f \n",i,numD[i]);
    for ( i = 0; i<5; i++)
        printf("str[%d] = %c \n",i,str[i]);
    
    
return 0;
}