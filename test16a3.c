//  Read and store the roll no and marks of 20 students using 2D array.

#include<stdio.h>
void main(){
    
    int students = 20, i;
    int data[20][2];
    printf("enter roll no. and marks for 20 students : \n");
    
    for (i = 0; i < 20; i++) {
        printf("student : %d\n", i+1);
        printf("enter roll no : ");
        scanf("%d", &data[i][0]);
        printf("enter marks : ");
        scanf("%d", &data[i][1]);
    }
    
    printf("\nroll no. \t marks \n");
    
    for (i = 0; i < 20; i++) {
        printf("%d\t\t%d\n", data[i][0], data[i][1]);
    }
    
}