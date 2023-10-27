#include <stdio.h>
int main (){
    char name[5][100];
    int age_weight_height [5][3],raw1,raw2;
    
    for ( raw1 = 0; raw1 < 5; raw1++){
        printf ("Enter your Name,Age,Weight,Height [%d]  : ",raw1+1); 
        scanf("%s %d %d %d",&name[raw1],&age_weight_height[raw1][0],
             &age_weight_height[raw1][1],&age_weight_height[raw1][2]);
    }
    for (raw2 = 0; raw2< 5; raw2++){
        printf("[%d] Name :\t%s \nage :\t\t%d \nweight :\t%d \nHeight :\t%d\n"
            ,raw2+1,name[raw2],age_weight_height[raw2][0],age_weight_height[raw2][1],age_weight_height[raw2][2]);
    }
    
return 0;
}