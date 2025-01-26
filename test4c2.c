#include <stdio.h>
void main() {

    //total days in years, weeks and days form

    int d, y, w, total_d;


    printf("Enter the number of days: ");
    scanf("%d", &total_d);

    y = total_d / 365;
    d = total_d % 365;

    w = d / 7;
    d = d % 7;

    printf("%d days is equal to %d years, %d weeks, and %d days.\n", total_d, y, w, d);

}
