#include<stdio.h>
void main(){
    
    int n, i, j, a, b, min = 0;
    printf("eter the n ");
    scanf("%d", &n);
    
    for (i = 1; i <= 2*n-1; i++) {
        
        for (j = 1; j <= 2*n - 1; j++) {
            
            a = i;
            if (i > n) {
                a = 2*n - i;
            }
            
            b = j;
            if (j > n) {
                b = 2*n - j;
            }
            
            if (a < b) {
                min = a;
            }
            
            else {
                min = b;
            }
            
            printf("%d", n+1-min);
            
        }
        
        printf("\n");
        
    }
    
}