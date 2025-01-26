#include<stdio.h>
#include<math.h>
int main(){
    
    // Check whether the given number is Armstrong or not.
    
    int no, n = 0, original, remainder, result = 0;
    
    printf("enter value of number ");
    scanf("%d", &no);
    
    original = no;
    
    while (original != 0) {
        original /= 10;
        n++;
    }
    
    original = no;
    
    while (original != 0) {
        remainder = original % 10;
        result += (int)(pow(remainder, n) + 0.5);
        original /= 10;
    }
    
    if (result == no) {
        printf("number is armstrong\n");
    }
    
    else {
        printf("number is not armstrong\n");
    }
    
    return 0;
    
}