#include <stdio.h>
#include <ctype.h>

int isConstant(char str[]) {
    int i = 0;
    if (str[i] == '-' || str[i] == '+') i++; // Allow sign for numbers
    while (str[i] != '\0') {
        if (!isdigit(str[i])) // Check if character is not a digit
            return 0;
        i++;
    }
    return 1; // It's a constant
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isConstant(str))
        printf("The string is a constant.\n");
    else
        printf("The string is NOT a constant.\n");

    return 0;
}
