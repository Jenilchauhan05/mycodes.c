//  Return the maximum of three floating-point numbers.

#include <stdio.h>
float maximum(float a, float b, float c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

void main(){
    
    float a, b, c, max;
    
    printf("enter value of a, b and c ");
    scanf("%f %f %f", &a, &b, &c);
    
    max = maximum(a, b, c);
    printf("maximum floating point no is %.2f\n", max);
    
}