#include <stdio.h>
#include <math.h>

// ฟังก์ชันคำนวณพื้นที่วงกลม
float calculateCircleArea(float radius) {
    return 3.14159 * radius * radius;
}

// ฟังก์ชันคำนวณพื้นที่สามเหลี่ยม
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

// ฟังก์ชันคำนวณพื้นที่สี่เหลี่ยมด้านขนาน
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// ฟังก์ชันคำนวณพื้นที่สี่เหลี่ยมผืนผ้า
float calculateTrapezoidArea(float base1, float base2, float height) {
    return 0.5 * (base1 + base2) * height;
}

int main() {
    float radius, base, height, length, width, base1, base2;

    // คำนวณพื้นที่วงกลม 1 ครั้ง
    printf("ป้อนรัศมีของวงกลม: ");
    scanf("%f", &radius);
    float circleArea = calculateCircleArea(radius);
    printf("พื้นที่วงกลม: %.2f\n", circleArea);

    // คำนวณพื้นที่สามเหลี่ยม 1 ครั้ง
    printf("ป้อนความยาวฐานและความสูงของสามเหลี่ยม: ");
    scanf("%f %f", &base, &height);
    float triangleArea = calculateTriangleArea(base, height);
    printf("พื้นที่สามเหลี่ยม: %.2f\n", triangleArea);

    // คำนวณพื้นที่สี่เหลี่ยมด้านขนาน 1 ครั้ง
    printf("ป้อนความยาวและความกว้างของสี่เหลี่ยมด้านขนาน: ");
    scanf("%f %f", &length, &width);
    float rectangleArea = calculateRectangleArea(length, width);
    printf("พื้นที่สี่เหลี่ยมด้านขนาน: %.2f\n", rectangleArea);

    // คำนวณพื้นที่สี่เหลี่ยมผืนผ้า 2 ครั้ง
    printf("ป้อนความยาวของฐานบนและฐานล่างของสี่เหลี่ยมผืนผ้า: ");
    scanf("%f %f", &base1, &base2);
    printf("ป้อนความสูงของสี่เหลี่ยมผืนผ้า: ");
    scanf("%f", &height);
    float trapezoidArea1 = calculateTrapezoidArea(base1, base2, height);
    float trapezoidArea2 = calculateTrapezoidArea(base1, base2, height);
    printf("พื้นที่สี่เหลี่ยมผืนผ้าครั้งที่ 1: %.2f\n", trapezoidArea1);
    printf("พื้นที่สี่เหลี่ยมผืนผ้าครั้งที่ 2: %.2f\n", trapezoidArea2);

    return 0;
}
