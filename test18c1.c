// Create a menu driven program to implement own string.h library. (without using built-in string functions)

#include<stdio.h>
int mystrlen(char str[]) {
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void mystrcpy(char str1[], char str2[]) {
    
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int mystrcmp(char str1[], char str2[]) {
    
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

void mystrcat(char str1[], char str2[]) {
    
    int str1_len = mystrlen(str1), i = 0;
    while (str2[i] != '\0') {
        str1[str1_len + i] = str2[i];
        i++;
    }
    str1[str1_len + i] = '\0';
}

void main(){
    
    char str1[100], str2[100], res[200];
    int choice;
    
    do {
        printf("menu :\n");
        printf("1. find length of string\n");
        printf("2. copy one string to another\n");
        printf("3. compare two strings\n");
        printf("4. Concatenate two strings\n");
        printf("5. exit\n");
        printf("enter your choice ");
        scanf("%d", &choice);
        getchar();
        
        switch (choice) {
            
            case 1 :
            printf("enter a string ");
            fgets (str1, 100, stdin);
            str1[mystrlen(str1) - 1] = '\0';
            printf("length of the string : %d\n", mystrlen(str1));
            break;
            
            case 2 :
            printf("enter source string ");
            fgets (str1, 100, stdin);
            str1[mystrlen(str1) - 1] = '\0';
            mystrcpy(res, str1);
            printf("copied string : %s\n", res);
            break;
            
            case 3 :
            printf("enter first string ");
            fgets (str1, 100, stdin);
            str1[mystrlen(str1) - 1] = '\0';
            printf("enter second string ");
            fgets (str2, 100, stdin);
            str2[mystrlen(str2) - 1] = '\0';
            int cmp_res = mystrcmp(str1, str2);
            if (cmp_res == 0) {
                printf("strings are equal\n");
            }
            else if (cmp_res > 0) {
                printf("first string is greater\n");
            }
            else {
                printf("second string is greater\n");
            }
            break;
            
            case 4 :
            printf("enter first string ");
            fgets (str1, 100, stdin);
            str1[mystrlen(str1) - 1] = '\0';
            printf("enter second string ");
            fgets (str2, 100, stdin);
            str2[mystrlen(str2) - 1] = '\0';
            mystrcpy(res, str1);
            mystrcat(res, str2);
            printf("Concatenated string : %s\n", res);
            break;
            
            case 5 :
            printf("exiting programe..");
            break;
            
            default :
            printf("invalid choice");
            break;
        }
    }
}