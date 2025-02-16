// C Program to Check if a String is a Palindrome using Pointers
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int isPalindrome(char *str) {
    int len = strlen(str);
    char *start = str;         
    char *end = str + len - 1;   

    while (start < end) {
        while (start < end && !isalnum(*start)) {
            start++;
        }
        while (start < end && !isalnum(*end)) {
            end--;
        }
        if (start < end && tolower(*start) != tolower(*end)) {
            return 0; 
        }
        start++;
        end--;
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    str[strcspn(str, "\n")] = 0;

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}