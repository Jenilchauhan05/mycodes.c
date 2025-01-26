#include<stdio.h>
void main(){
    
    // Print Pascal triangle.
    
    int n, i, j, val;
    
    printf("enter the n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        
        val = 1;
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("%2d", val);
            val = val * (i - j) / j;
        }
        
        printf("\n");
        
    }
    
}