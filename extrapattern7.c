#include<stdio.h>
void main(){
    
    int n, i, j, st, sp;
    
    printf("enter the n ");
    scanf("%d", &n);
    st = 1;
    sp = n / 2;
    
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= sp; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= st; j++) {
            printf("*");
        }
        
        if (i < (n+1)/2) {
            sp--;
            st += 2;
        }
        
        else {
            sp++;
            st -= 2;
        }
        
        printf("\n");
        
    }
    
}
    
    
