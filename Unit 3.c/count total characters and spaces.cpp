#include<stdio.h>
int main() {
    char text[150];
    int i = 0, chars = 0, spaces = 0;

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    while(text[i] != '\0') {
        if(text[i] == ' ')
            spaces++;
        else if(text[i] != '\n')
            chars++;

        i++;
    }

    printf("Entered text: %s", text);
    printf("Total characters = %d\n", chars);
    printf("Total spaces = %d", spaces);

    return 0;
}