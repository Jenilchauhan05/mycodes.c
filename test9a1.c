#include<stdio.h>
void main(){
    
    // Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
    
    int n, i = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (i <= n) {
        
        if (i % 2 == 0) {
            printf(" - %d", i);
        }
        
        else {
            printf(" + %d", i);
        }
        
        i++;
        
    }
    
}