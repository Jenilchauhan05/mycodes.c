//  Input a string in character array and print string and length of string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to allow spaces in the input

    // Remove the newline character added by fgets, if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    length = strlen(str);

    printf("The entered string is: \"%s\"\n", str);
    printf("The length of the string is: %d\n", length);

}
