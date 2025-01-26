#include<stdio.h>
void main(){
    
    int n, i, j, sp, st;
    
    printf("enter the n ");
    scanf("%d", &n);
    sp = 0;
    st = n;
    
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= sp; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= st; j++) {
            printf("*");
        }
        
        sp++;
        st--;
        printf("\n");
        
    }
    
}