// Write a program which counts number of words, lines and characters in a given text.

#include <stdio.h>

int main() {
    char str[100];
    int i, words = 0, lines = 0, chars = 0;
    printf("Enter the text ending with ~ : ");
    scanf("%[^~]", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        }
        if (str[i] == '\n') {
            lines++;
            words++;
        }
        if (str[i] != ' ' && str[i] != '\n') {
            chars++;
        }
    }
    printf("The number of words is: %d", words);
    printf("The number of lines is: %d", lines);
    printf("The number of characters is: %d", chars);
    return 0;
}