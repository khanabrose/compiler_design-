#include <stdio.h>
#include <string.h>

int isKeyword(char str[]) {
    
    char *keywords[] = {"int", "return", "if", "else", "for", "while", "char", "float", "double", "void"};
    int n = 10; 

    for (int i = 0; i < n; i++) {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isKeyword(str))
        printf("The string is a keyword.\n");
    else
        printf("The string is NOT a keyword.\n");

    return 0;
}
