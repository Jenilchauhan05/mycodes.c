// Find maximum and minimum between two numbers using function.

#include<stdio.h>
int max(int a, int b) {
    (a > b)? a : b;
    return a;
}

void main(){
    
    int a, b, mx;
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    mx = max(a, b);
    printf("maximum number is : %d\n", mx);
    
}