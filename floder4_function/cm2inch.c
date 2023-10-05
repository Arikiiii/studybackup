#include <stdio.h>
float cm2inch (float cm);
int main(){
    float a;
    printf("Enter [cm.] : ");scanf("%f",&a);
    a=cm2inch(a);
    printf("Your [inch.] : %.4f inch",a);
}
//function
float cm2inch (float cm){
    return     cm * 0.393701; 

}