// Calculate sum of two numbers using pointer.

#include<stdio.h>
void main(){
    
    int a, b, sum;
    int *ptr1, *ptr2;
    
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    ptr1 = &a;
    ptr2 = &b;
    
    sum = *ptr1 + *ptr2;
    printf("sum of %d and %d is %d\n", *ptr1, *ptr2, sum);
    
}