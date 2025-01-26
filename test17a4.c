// Swap value of two numbers using pointer.

#include<stdio.h>
void main(){
    
    int a, b, temp;
    int *ptr1, *ptr2;
    
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    ptr1 = &a;
    ptr2 = &b;
    
    printf("before swaping : a = %d, b = %d\n", *ptr1, *ptr2);
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    printf("after swapping : a = %d, b = %d\n", *ptr1, *ptr2);
}