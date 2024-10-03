#include <stdio.h>
#include <string.h>

#define MAX 10

void left_factor(char grammar[MAX][MAX], int n)
{
    char common[MAX];
    int i, j, k, common_len = 0;

    // Check for common prefix among alternatives
    for (i = 0; grammar[1][i] != '\0'; i++)
    {
        char current_char = grammar[1][i];
        int flag = 1;
        for (j = 2; j < n; j++)
        {
            if (grammar[j][i] != current_char)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            common[common_len++] = current_char;
        else
            break;
    }

    common[common_len] = '\0'; // Null-terminate the common prefix string

    if (common_len == 0)
    {
        printf("No left factoring required.\n");
        return;
    }

    // Display the left factored grammar
    printf("Left factored Grammar:\n");
    printf("A -> %sX\n", common);
    printf("X -> ");
    for (j = 1; j < n; j++)
    {
        if (strlen(grammar[j]) == common_len)
            printf("ε "); // epsilon production
        else
            printf("%s ", &grammar[j][common_len]);
    }
    printf("\n");
}

int main()
{
    int n, i;
    char grammar[MAX][MAX];

    printf("Enter number of productions: ");
    scanf("%d", &n);

    printf("Enter the grammar productions (A -> production format without A -> part):\n");
    for (i = 1; i <= n; i++)
    {
        printf("Production %d: ", i);
        scanf("%s", grammar[i]);
    }

    left_factor(grammar, n + 1);

    return 0;
}
