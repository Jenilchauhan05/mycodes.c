//  Create a function that converts amount into words. (i.e. 9241: Nine Thousand Two Hundred Forty One)

#include <stdio.h>
#include <string.h>

char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char *teens[] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
char *thousands[] = {"", "Thousand", "Million", "Billion"};

void numbertowords(int n, char *res) {

    if (n == 0) {
        strcat(res, "Zero");
        return;
    }
    
    int chunkindex = 0;
    char tempres[500] = " ";

    while (n > 0) {
        int chunk = n % 1000;
        
        if (chunk > 0) {
            char chunkwords[100] = " ";
            
            if (chunk / 100 > 0) {
                strcat(chunkwords, ones[chunk / 100]);
                strcat(chunkwords, " Hundred ");
            } 
            
            int remainder = chunk % 100;
            if (remainder >= 11 && remainder <= 19) {
                strcat(chunkwords, teens[remainder - 11]);
            }
            
            else {
                
                if (remainder / 10 > 1) {
                    strcat(chunkwords, tens[remainder / 10]);
                    strcat(chunkwords, " ");
                }
                
                strcat(chunkwords, ones[remainder % 10]);
                
            }
            
            if (strlen(chunkwords) > 0) {
                strcat(chunkwords, thousands[chunkindex]);
            }
            
            char temp[500] = " ";
            strcpy(temp, chunkwords);
            strcat(temp, tempres);
             strcpy(tempres, temp);
            
        }
        
        n /= 1000;
        chunkindex++;
    }
     strcpy(res, tempres);
}

void main(){
    
    int n;
    char res[500] = " ";
    printf("enter the n ");
    scanf("%d", &n);
    
    numbertowords(n, res);
    printf("in words : %s\n", res);
    
}

  
