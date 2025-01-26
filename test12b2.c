#include<stdio.h>
void main(){
    
    //  Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!…)
    
    int n, i, j;
    float e = 1.0, fact;
    
    printf("enter the numbers : ");
    scanf("%d", &n);
    
    for (i = 1; i < n; i++) {
        fact = 1.0;
        
        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        
        e += 1.0 / fact;
        
    }
    
    printf("estimated value of e is : %.2f\n", e);
    
}