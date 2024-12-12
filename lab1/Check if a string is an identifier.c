#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isIdentifier(char str[]) {
    if (!isalpha(str[0]) && str[0] != '_') // First character must be a letter or underscore
        return 0;

    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') // Must be alphanumeric or underscore
            return 0;
    }
    return 1; // Valid identifier
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isIdentifier(str))
        printf("The string is a valid identifier.\n");
    else
        printf("The string is NOT a valid identifier.\n");

    return 0;
}
