#include <stdio.h>
float circleCal(float radius);
float rentCAl(float rent_1,float rent_2);
float rectParaCal(float wight,float hight);
float triangleCal(float wight,float higt);
int main (){
    printf(" All area : %.2f",circleCal(4)+triangleCal(5,5)+rectParaCal(10,5)+rentCAl(10,8)+rentCAl(5,8));
    return 0;
}
float circleCal(float radius){
    return (radius * radius)*3.14159;//วงกลม
}
float rentCAl(float rent_1,float rent_2){
    return rent_1*rent_2;//สี่เหลี่ยมผืนผ้า
}
float rectParaCal(float wight,float hight){
    return wight*hight;//สี่เหลี่ยมด้านขนาน
}
float triangleCal(float wight,float higt){
    return (wight*higt)/2;//สามเหลี่ยม
}