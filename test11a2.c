#include<stdio.h>
void main(){
    
    // print sum of 1 to n no by for loop
    
    int n, i, sum = 0;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        
        sum += i;
        
    }
    
    printf("sum of 1 to n is %d\n", sum);
    
}