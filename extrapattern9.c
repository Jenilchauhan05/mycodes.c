#include<stdio.h>
void main(){
    
    int n, i, j, st, sp, a;
    printf("enter the n ");
    scanf("%d", &n);
    
    st = n;
    sp = 1;
    
    for (i = 1; i <= 2*n+1; i++) {
        printf("%d", i);
    }
    printf("\n");
    
    for (i = 1; i <= n; i++) {
        
        a = 1;
        for (j = 1; j <= st; j++) {
            printf("%d", a);
            a++;
        }
        
        for (j = 1; j <= sp; j++) {
            printf(" ");
            a++;
        }
        
        for (j = 1; j <= st; j++) {
            printf("%d", a);
            a++;
        }
        
        st--;
        sp += 2;
        printf("\n");
        
   }
   
}