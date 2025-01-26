#include<stdio.h>
void main(){
    
    int n, i, j;
    
    printf("enter the n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        
        int a = 1;
        
        for (j = 1; j <= n-i; j++) {
            printf("  ");
        }
        
        for (j = 1; j <= 2*i-1; j++) {
            printf(" %c", a+64);
            a++;
        }
        
        printf("\n");
        
    }
    
}