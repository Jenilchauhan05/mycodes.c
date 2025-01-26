#include <stdio.h>
void main()
{

    // print no is even or odd using conditional operators

    int n, check;

    printf("enter value of n ");
    scanf("%d", &n);

    check = (n % 2 == 0) ? printf("even") : printf("odd");
    
}