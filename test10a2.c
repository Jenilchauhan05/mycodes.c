#include<stdio.h>
void main(){
    
    // Find the sum and average of different numbers which are accepted by user as many as user wants.
    
    int n, count = 0;
    float sum = 0, avg;
    
    printf("enter numbers (enter -1 to stop)\n ");
    
    while (1) {
        printf("enter numbers : ");
        scanf("%d", &n);
    
    if (n == -1) {
        break;
    }
    
    sum += n;
    count++;
    
    }
    
    if (count > 0) {
        avg = sum / count;
        printf("sum is %.2f and average is %.2f\n", sum, avg);
    }
    
    else {
        printf("no numbers\n");
    }
    
}