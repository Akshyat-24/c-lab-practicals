#include<stdio.h>

int main()
{
    int r1, c1;

    printf("Enter NO. of Rows : ");
    scanf("%d", &r1);

    printf("Enter NO. of Columns : ");
    scanf("%d", &c1);

    int a[10][10];
    int b[10][10];
    int sum[10][10];

    printf("Enter elements of first matrix:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int r2, c2;

    printf("Enter NO. of Rows : ");
    scanf("%d", &r2);

    printf("Enter NO. of Columns : ");
    scanf("%d", &c2);

    if(r1 != r2 || c1 != c2)
    {
        printf("Matrix Addition not possible \n");
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

    // Matrix Addition
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            sum[i][j] = a[i][j] + b[i][j]; // Same Subtraction
        }
    }

    printf("Sum of matrices:\n");

    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}