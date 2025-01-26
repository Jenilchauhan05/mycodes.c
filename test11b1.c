#include<stdio.h>
void main(){
    
    // Print the Fibonacci Series
    
    int n, t1 = 0, t2 = 1, next = 0, i;
    
    printf("enter value of total terms ");
    scanf("%d", &n);
    
    printf("fibonacci series : %d, %d,", t1, t2);
    
    for (i = 3; i <= n; i++) {
        next = t1 + t2;
        printf(" %d,", next);
        t1 = t2;
        t2 = next;
    }
    
}