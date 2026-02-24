#include <stdio.h>
//(Read string, check palindrome, convert to uppercase WITHOUT built-in functions)

int main() {
    char str[100];
    int i, length = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while(str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for(i = 0; i < length/2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // Convert to uppercase manually
    for(i = 0; i < length; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase: %s", str);

    return 0;
}