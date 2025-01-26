#include<stdio.h>
void main(){

    //simple intrest

    float p, r, t, intrest = 0;
    printf("enter value of p, r and t");
    scanf("%f %f %f", &p, &r, &t);

    intrest = p*r*t/100;

    printf("intrest is : %f", intrest);
    
}