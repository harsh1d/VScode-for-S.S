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
