#include<stdio.h>
void main(){
    
    // Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.
    
    int i = 1, n, sum = 0;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    printf("series : ");
    
    while (i <= n) {
        printf("%d", i * i);
        
        if (i < n) {
            printf(" + ");
        }
        
        sum += i * i;
        i++;
        
    }
    
    printf("\nsum of series is : %d\n", sum);
    
}