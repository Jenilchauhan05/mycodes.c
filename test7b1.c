#include <stdio.h>
void main()
{

    // Read 3 numbers, multiply largest number from ƒrst two numbers to third one using conditional.

    int a, b, c, largest, result;

    printf("enter values of a, b and c ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? a : b;

    result = largest * c;

    printf("result is %d", result);
    
}