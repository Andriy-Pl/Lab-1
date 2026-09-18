#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main(){
   float L_circle, r_circle, S;
    printf("Введіть довжину кола:");
    scanf("%f", &L_circle);
    r_circle = L_circle/2/M_PI;
    S = (r_circle*r_circle)*M_PI;
    printf("\nПлощя круга: %.3f", S);
    return 0;
}