#include<stdio.h>
void main(){
    
    // Print number of days in a month considering leap year using switch.
    
    int year, month, days, leap_year = 0;
    
    printf("enter months (1-12) ");
    scanf("%d", &month);
    printf("enter year ");
    scanf("%d", &year);
    
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
       leap_year = 1; 
    }
    
    switch (month) {
        
    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
        printf("month have 31 days\n");
        break;
        
    case 4 : case 6 : case 9 : case 11 :
        printf("month have 30 days\n");
        break;
        
    case 2 :  
         
        if (leap_year) {
            printf("month have 29 days\n");
        }      
        
        else {
            printf("month have 28 days\n");
        }
        
        break;
    
    default:
        printf("invalid month\n");
        break;
    }
    
}