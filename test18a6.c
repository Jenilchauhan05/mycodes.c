// Swap two numbers using call by reference.

#include<stdio.h>
int callbyreference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    
    int a, b;
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    printf("before swap by reference : a = %d, b = %d\n", a, b);
    callbyreference(&a, &b);
    printf("after swap by referece : a = %d, b = %d\n", a, b);
    
}