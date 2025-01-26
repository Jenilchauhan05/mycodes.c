// Count simple interest using function.

#include<stdio.h>
float intrest(int p, int r, int t) {
    return p * r * t / 100.0;
}

void main(){
    
    int p, r, t;
    float intr;
    printf("enter value of p, r and t ");
    scanf("%d %d %d", &p, &r, &t);
    
    intr = intrest(p, r, t);
    printf("simple intrest is : %f\n", intr);
    
}