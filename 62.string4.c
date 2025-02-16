// C Program to Check if the String is Palindrome or Not
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        if (str[l++] != str[r--]) return 0;
    }
    return 1;
}

int main() {
    char str[] = "madam";
    printf("%s is %sa palindrome\n", str, isPalindrome(str) ? "" : "not ");
    return 0;
}
