#include <stdio.h>

int main() {
    char str[100];
    int whitespaces = 0, newlines = 0, i = 0;

    printf("Enter a string (Press Enter to finish):\n");
    while ((str[i] = getchar()) != EOF) {
        if (str[i] == ' ')
            whitespaces++;
        else if (str[i] == '\n')
            newlines++;
        i++;
    }

    printf("Number of whitespaces: %d\n", whitespaces);
    printf("Number of newlines: %d\n", newlines);

    return 0;
}
