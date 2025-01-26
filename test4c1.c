#include <stdio.h>
void main() {

    // total seconds in hh:mm:ss form

    int total_s, m, h, s;

    printf("Enter total seconds: ");
    scanf("%d", &total_s);

    h = total_s / 3600;

    m = (total_s % 3600) / 60;

    s = total_s % 60;

    printf("%02d:%02d:%02d\n", h, m, s);

}
