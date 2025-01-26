// Add two numbers using function.

#include<stdio.h>
int add(int a, int b) {
    return a + b;
}

void main(){
    
    int a, b, sum;
    
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    sum = add(a, b);
    printf("sum of a and b is : %d\n", sum);
    
}