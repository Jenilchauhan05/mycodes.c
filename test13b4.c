#include<stdio.h>
void main(){
    
    int n, i, j, a;
    char ch = 'A';
    
    printf("enter the n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        
        a = 1;
        for (j = 1; j <= i; j++) {
            
            if (i % 2 != 0) {
                printf("%d", a);
                a++;
            }
            
            else {
                printf("%c", ch);
                ch++;
            }
            
        }
        
        printf("\n");
        
    }
    
}