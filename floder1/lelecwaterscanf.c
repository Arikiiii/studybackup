#include <stdio.h>
int main ()
{
    //variable
    char user [101];int Elec_Unit,Water_Unit;float Elec_Pice_Unit=10.25,Watar_Price_Unit=50.50;
    //input
    printf("Enter Your name :");scanf("%s",user);
    printf("\nEnter elet unit :");scanf("%d",&Elec_Unit);
    printf("\nEnter water Unit : ");scanf("%d",&Water_Unit);
    //proceess!!!
    double Elec_total_Price =Elec_Unit*Elec_Pice_Unit;
    double Water_Total_Price =Water_Unit*Watar_Price_Unit;
    double total = Watar_Price_Unit*Elec_Pice_Unit;
    //Output
    printf("=====================================\n");
    printf("User name \t\t= %s\n",user);
    printf("Elec Unit price \t= %.2f\n",Elec_Pice_Unit);
    printf("Water Unit price \t= %.2f\n",Watar_Price_Unit);
    printf("your water unit\t\t= %d\n",Water_Unit);
    printf("your Elec unit\t\t= %d\n",Elec_Unit);
    printf("--------------------------------------\n");
    printf("Elec total price \t= %.2f\n",Elec_total_Price);
    printf("Water total price \t= %.2f\n",Watar_Price_Unit);
    printf("--------------------------------------\n");
    printf("total \t\t\t= %.2f\n",total);
    printf("======================================\n");
    return 0;
}