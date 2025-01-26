#include<stdio.h>
void main(){
    
    //  Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).
    
    int i, n, sum = 0;
    
    printf("enter the n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        
        sum += ((i + 1)*i) / 2;
        
    }
    
    printf("sum of series is : %d\n", sum);
    
}