#include <stdio.h>
int main()
{
	int weight, height;
	printf("Enter weight(kg): "); scanf("%d",&weight);
	printf("Enter height(cm): "); scanf("%d",&height);
	float hMeter	= height/100.0;
	float BMI = (float)weight/(hMeter*hMeter);
	printf("Your BMI: %.1f\n",BMI);
    if (BMI<18.5)
        printf("Too thin");
    else if ((BMI>=18.5)&&(BMI<=22.9))
        printf("Good"); 
    else if ((BMI>22.9)&&(BMI<=24.9))
        printf("Little fat");
    else if ((BMI>24.9)&&(BMI<=29.9))
        printf("Big fat");
    else
        printf("Dangerous Fat");
	return 0;

}