#include<stdio.h>
#include<math.h>
void main(){
    
    //Print number and its square root for 0 to 9.
    
    int i = 1;
    
    while (i < 11)
    {
        printf("no : %d, square root : %.2f\n", i, sqrt(i));
        i++;
    }
    
}