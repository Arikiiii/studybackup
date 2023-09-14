#include <stdio.h>
float  rentCal (int room_price ,float water_use ,float elect_use);
int main(){
    int room;
    float water,elect;
    printf("Enter Room price :");scanf("%d",&room);
    printf("\nEnter water use");scanf("%f",&water);    
    printf("\nEnter elect use");scanf("%f",&elect);
    printf("Room price : %.2f bath", rentCal(room,water,elect) );
    return 0;
}
//function
float  rentCal (int room_price ,float water_use ,float elect_use){
    return room_price+(water_use*15)+(elect_use*10);
}