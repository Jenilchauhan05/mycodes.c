#include <stdio.h>
void main()
{

    // perform addition, subtraction, multiplication and division as user choice using switch

    char a = 1, s = 2, m = 3, d = 4;
    int x, y, result, choice;

    printf("enter value of x and y ");
    scanf("%d %d", &x, &y);

    printf("enter your choice btwn 1 to 4 ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        result = x + y;
        printf("sum is %d", result);
        break;

    case 2:
        result = x - y;
        printf("subtraction is %d", result);
        break;

    case 3:
        result = x * y;
        printf("multiplication is %d", result);
        break;

    case 4:
        result = x / y;
        printf("division is %d", result);
        break;

    default:
        printf("choice is invalid pls choose btwn 1 to 4\n");
        break;
    }
}