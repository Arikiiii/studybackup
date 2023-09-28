#include <stdio.h>

float rentCal(int monthly_rent, float water_usage, float electricity_usage) {
    float water_price_per_unit = 15.0;  // ราคาน้ำต่อหน่วย
    float electricity_price_per_unit = 10.0;  // ราคาไฟต่อหน่วย
    
    float total_rent = monthly_rent + (water_usage * water_price_per_unit) + (electricity_usage * electricity_price_per_unit);
    
    return total_rent;
}

int main() {
    int monthly_rent;
    float water_usage, electricity_usage;

    printf("ป้อนค่าเช่าต่อเดือน (บาท): ");
    scanf("%d", &monthly_rent);

    printf("ป้อนจำนวนหน่วยน้ำที่ใช้ไป: ");
    scanf("%f", &water_usage);

    printf("ป้อนจำนวนหน่วยไฟที่ใช้ไป: ");
    scanf("%f", &electricity_usage);

    float total_rent = rentCal(monthly_rent, water_usage, electricity_usage);
    printf("ค่าเช่าห้องรวม: %.2f บาท\n", total_rent);

    return 0;
}
