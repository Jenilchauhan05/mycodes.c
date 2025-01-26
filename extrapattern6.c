#include<stdio.h>
void main(){
    
    int n, i, j, ch;
    
    printf("enter the n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        
        ch = 1;
        
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf(" %c", ch+64);
            ch++;
        }
        
        ch -= 2;
        for (j = 1; j <= i-1; j++) {
            printf(" %c", ch + 64);
            ch--;
        }
        
        printf("\n");
        
    }
    
}