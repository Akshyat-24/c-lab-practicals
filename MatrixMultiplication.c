#include<stdio.h>

int main()
{
    int r1, c1;

    printf("Enter NO. of Rows of Matrix A : ");
    scanf("%d", &r1);

    printf("Enter NO. of Columns of Matrix A : ");
    scanf("%d", &c1);

    int a[10][10];
    int b[10][10];
    int mul[10][10];

    printf("Enter elements of first matrix:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int r2, c2;

    printf("Enter NO. of Rows of Matrix B : ");
    scanf("%d", &r2);

    printf("Enter NO. of Columns of Matrix B : ");
    scanf("%d", &c2);

    if(c1 != r2)
    {
        printf("Matrix Multiplication not possible\n");
        return 0;
    }

    printf("Enter elements of second matrix:\n");

    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplication
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}