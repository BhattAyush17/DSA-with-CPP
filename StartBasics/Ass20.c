// Addition of matrices
#include <stdio.h>
int f1()
{
    int A[3][3], B[3][3], C[3][3], i, j, k;
    printf("enter the 9 nums for first");
    for(i = 0; i <=2 ; i++)
        for(j = 0; j <=2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter the 9 nums for second matrix");
    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            scanf("%d", &B[i][j]);

    printf("Sum of matrix");
    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            C[i][j] = A[i][j] + B[i][j];
    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            printf("%d ", C[i][j]);
    printf("\n");

    return 0;
}

// multiplication of matrices
void f2(){
    int E[3][3], F[3][3], D[3][3]={0}, i, j, k;
    printf("\nEnter the 9 elements for the first 3*3 matrix:\n");
    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            scanf("%d\n", &E[i][j]);

    printf("\nEnter the 9 elements for the second 3*3 matrix:\n");
    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            scanf("%d\n", &F[i][j]);


    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            for(k=0; k<=2; k++)
                D[i][j] += E[i][k] * F[k][j];

    printf("product of the two matrices are\n");
            for(i=0; i<=2; i++)
             for(j=0; j<=2; j++)
             printf("%d\t", D[i][j]);
    printf("\n");

}

// Transpose of a matrix
void f3() {
    int G[3][3], i, j, temp;

   
    printf("\nEnter the 9 elements for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &G[i][j]); 
        }
    }

    // Swap logic
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            
            temp = G[i][j];
            G[i][j] = G[j][i];
            G[j][i] = temp;
        }
    }

    printf("\nTranspose of the matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", G[i][j]); // Print element with a tab for spacing
        }
        printf("\n"); // Print a newline after each row
    }
}

void f4() {

// Score Board
void update_score_board(int p1, int p2, int res, int score_board[2][3]) {
    score_board[0][0] = p1; // Player 1's score
    score_board[1][0] = p2; // Player 2's score
    score_board[0][1] = res; // Result
} // <-- This closing brace was missing.

void display_score_board(int score_board[2][3]) {
    printf("Score Board:\n");
    printf("Player 1\tPlayer 2\tResult\n");
    printf("%d\t\t%d\t\t%d\n", score_board[0][0], score_board[1][0], score_board[0][1]);
}

}
int main(){
    f4(); 
    printf("\n");
    return 0;
}
 
