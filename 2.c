//  Write a c program to remove the Left Recursion from a given grammar

#include <stdio.h>
#include <string.h>

void removeLeftRecursion(char* nonTerminal, char* alpha, char* beta) {
    printf("Grammar without left recursion:\n");
    printf("%s -> %s%s'\n", nonTerminal, beta, nonTerminal);
    printf("%s' -> %s%s' | ε\n", nonTerminal, alpha, nonTerminal);
}

int main() {
    char nonTerminal[10], alpha[10], beta[10];
    
    printf("Enter the non-terminal: ");
    scanf("%s", nonTerminal);
    printf("Enter the alpha (recursive part): ");
    scanf("%s", alpha);
    printf("Enter the beta (non-recursive part): ");
    scanf("%s", beta);
    
    removeLeftRecursion(nonTerminal, alpha, beta);
    
    return 0;
}


// Non-terminal: A
// Alpha (recursive part): Aa
// Beta (non-recursive part): b

// Grammar without left recursion:
// A -> bA'
// A' -> aA' | ε

// This transformation eliminates the left recursion from the original grammar rule 
// A -> Aa | b.