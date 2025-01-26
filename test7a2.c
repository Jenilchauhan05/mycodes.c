#include<stdio.h>
void main(){

    // print days of months :

    int month;
    printf("enter value of months (1-12) ");
    scanf("%d", &month);

    switch (month){

    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
        printf("no. of days are 31\n");
        break;

    case 4 : case 6 : case 9 : case 11 :    
        printf("no. of days are 30\n");
        break;

    case 2 :
        printf("no. of days are 28 or 29 (depends upon leap year)\n");
        break;

    default:
        printf("no. of days are ivalid pls enter btwn 1-12\n");
        break;

    }
    
}