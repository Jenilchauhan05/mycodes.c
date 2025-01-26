#include<stdio.h>
void main(){
    
    // Calculate sum and average of the square of ƒrst 10 integers whose square has last digit 1.
    
    int i = 1, num = 1, sum = 0;
    float avg;
    
    printf("10 no whose square ends in 1 : ");
    
    while (i < 11) {
        
        if ((num * num) % 10 == 1) {
            printf("%d ", num);
            sum += (num * num);
            i++;
        }
        
        num++;
        
    }
    
    avg = sum / 10.0;
    
    printf("sum of squares : %d\n", sum);
    printf("average of sum of squares : %.2f\n", avg);
     
}