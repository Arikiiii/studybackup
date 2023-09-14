#include <stdio.h>
float circleCal(float radius);
float rentCAl(float rent_1,float rent_2);
float rectParaCal(float wight,float hight);
float triangleCal(float wight,float higt);
int main (){
    float radius=4;
    float hight3=5,wight3=5;
    float wight2=10,hight2=5;
    float wight4_1=10,hight4_1=8;
    float wight4_2=5,hight4_2=8;
    float all_area;
    all_area = circleCal(radius)+triangleCal(hight3,wight3)+rectParaCal(wight2,hight2)+
    rentCAl(wight4_1,hight4_1)+rentCAl(wight4_2,hight4_2);
    printf(" All area : %.2f",all_area);
}

//วงกลม
float circleCal(float radius){
    return (radius * radius)*3.14159;
}
//สี่เหลี่ยมผืนผ้า
float rentCAl(float rent_1,float rent_2){
    return rent_1*rent_2;
}
//สี่เหลี่ยมด้านขนาน
float rectParaCal(float wight,float hight){
    return wight*hight;
}
//สามเหลี่ยม
float triangleCal(float wight,float higt){
    return (wight*higt)/2;
}