#include<stdio.h>
void main(){
    
    int n, i, j;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    for (i = n; i > 0; i--) {
        
        for (j = n; j >= i; j--) {
            printf("%d", j);
        }
        
        printf("\n");
        
    }
    
}