// // Write A C Program To Left factor the given grammar
// #include<stdio.h>
// void main(){
//     int i, j, n, k;
//     printf("Enter the number of productions: ");
//     scanf("%d",&n);
//     char grammar[n][2], non_terminals[26], terminals[26];
//     printf("Enter the productions:\n");
//     for(i=0; i<n; i++){
//         scanf("%s", grammar[i]);
//         if(i==0){
//             non_terminals[0] = grammar[i][0];
//             k=1;
//         }
//         else{
//             int flag=0;
//             for(j=0; j<k; j++){
//                 if(non_terminals[j]==grammar[i][0]){
//                     flag=1;
//                     break;
//                 }
//             }
//             if(flag==0){
//                 non_terminals[k]=grammar[i][0];
//                 k++;
//             }
//         }
//     }
//     printf("The non-terminals are: ");
//     for(i=0; i<k; i++){
//         printf("%c ", non_terminals[i]);
//     }
//     printf("\n");
//     printf("The terminals are: ");
//     for(i=0; i<k; i++){
//         printf("%c ", terminals[i]);
//     }
//     printf("\n");
//     printf("Left factoring the grammar:\n");
//     for(i=0; i<k; i++){
//         printf("%c->", non_terminals[i]);
//         int flag=0;
//         for(j=0; j<n; j++){
//             if(grammar[j][0]==non_terminals[i]){
//                 if(flag==0){
//                     printf("%s", grammar[j]);
//                     flag=1;
//                 }
//                 else{
//                     printf("|%s", grammar[j]);
//                 }
//             }
//         }
//         printf("\n");
//     }  
//     printf("\n");
//     printf("\n");
//     printf("The left factored grammar is:\n");
//     for(i=0; i<k; i++){
//         printf("%c->", non_terminals[i]);
//         int flag=0;
//         for(j=0; j<n; j++){
//             if(grammar[j][0]==non_terminals[i]){
//                 if(grammar[j][1]==grammar[j][2]){
//                     if(flag==0){
//                         printf("%c", grammar[j][1]);
//                         flag=1;
//                     }
//                     else{
//                         printf("|%c", grammar[j][1]);
//                     }
//                 }
//                 else{
//                     if(flag==0){
//                         printf("%c%c", grammar[j][1], grammar[j][2]);
//                         flag=1;
//                     }
//                     else{
//                         printf("|%c%c", grammar[j][1], grammar[j][2]);
//                     }
//                 }
//             }
//         }
//         printf("\n");
         
// }

// Write A C Program To Left factor the given grammar
// if input if given like:-
// S->ab|ac
// A->he|ef

// output should be like:-
// S->aE
// B->he|ef
// E->b|c

// #include <stdio.h>
// #include <string.h>

// #define MAX 10

// void left_factor(char grammar[MAX][MAX], int n)
// {
//     char common[MAX];
//     int i, j, k, common_len = 0;

//     // Check for common prefix among alternatives
//     for (i = 0; grammar[1][i] != '\0'; i++)
//     {
//         char current_char = grammar[1][i];
//         int flag = 1;
//         for (j = 2; j < n; j++)
//         {
//             if (grammar[j][i] != current_char)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag)
//             common[common_len++] = current_char;
//         else
//             break;
//     }

//     common[common_len] = '\0'; // Null-terminate the common prefix string

//     if (common_len == 0)
//     {
//         printf("No left factoring required.\n");
//         return;
//     }

//     // Display the left factored grammar
//     printf("Left factored Grammar:\n");
//     printf("A -> %sX\n", common);
//     printf("X -> ");
//     for (j = 1; j < n; j++)
//     {
//         if (strlen(grammar[j]) == common_len)
//             printf("ε "); // epsilon production
//         else
//             printf("%s ", &grammar[j][common_len]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int n, i;
//     char grammar[MAX][MAX];

//     printf("Enter number of productions: ");
//     scanf("%d", &n);

//     printf("Enter the grammar productions (A -> production format without A -> part):\n");
//     for (i = 1; i <= n; i++)
//     {
//         printf("Production %d: ", i);
//         scanf("%s", grammar[i]);
//     }

//     left_factor(grammar, n + 1);

//     return 0;
// }
