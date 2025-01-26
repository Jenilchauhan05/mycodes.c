// Swap two numbers using call by value.

#include<stdio.h>
int swapbyvalue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("after swap by value : a = %d, b = %d\n", a, b);
}

void main(){
    
    int a, b;
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    printf("before swap by value : a = %d, b = %d\n", a, b);
    swapbyvalue(a, b);
    
}
