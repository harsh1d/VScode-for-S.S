#include <stdio.h>
#include <ctype.h>
#include <string.h>

void identifyTokens(const char *sourceCode) {
    int i = 0;
    while (sourceCode[i] != '\0') {
        if (isspace(sourceCode[i])) {
            i++;
            continue;
        }

        if (isalpha(sourceCode[i])) {
            int start = i;
            while (isalpha(sourceCode[i]) || isdigit(sourceCode[i]) || sourceCode[i] == '_') {
                i++;
            }
            printf("Identifier: %.*s\n", i - start, sourceCode + start);
        } else if (isdigit(sourceCode[i])) {
            int start = i;
            while (isdigit(sourceCode[i])) {
                i++;
            }
            printf("Number: %.*s\n", i - start, sourceCode + start);
        } else {
            printf("Symbol: %c\n", sourceCode[i]);
            i++;
        }
    }
}

int main() {
    char sourceCode[1024];
    printf("Enter the source code: ");
    fgets(sourceCode, sizeof(sourceCode), stdin);
    identifyTokens(sourceCode);
    return 0;
}





// int main()
// {
//     const char *sourceCode = "int main() { int a = 5; printf(\"Hello, World!\"); return 0; }";
//     identifyTokens(sourceCode);
//     return 0;
// }