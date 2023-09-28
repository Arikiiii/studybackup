#include <stdio.h>
#include <math.h>
int main (){
    double x,y ;
    printf("enter base and exponent : ");
    scanf("%lf %lf",&x,&y);
    printf("%.0f ^ %.0f = %.0f\n",x,y,pow(x,y));
    return 0;
}
