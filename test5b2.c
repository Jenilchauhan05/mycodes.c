#include<stdio.h>
#include<time.h>
void main(){

    //current time

    time_t current_time;

    time(&current_time);

    printf("current date and time : %s", ctime(&current_time));
    
}