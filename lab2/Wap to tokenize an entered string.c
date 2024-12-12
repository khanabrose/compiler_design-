#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; 
    char *token;     
    const char delimiter[] = " "; // Delimiters (space in this case)
    printf("Enter a string to tokenize: ");
    fgets(input, sizeof(input), stdin); 
    input[strcspn(input, "\n")] = '\0'; // Remove the newline character if present

    token = strtok(input, delimiter);
    printf("Tokens:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }

    return 0;
}
