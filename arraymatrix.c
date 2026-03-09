#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c1;
    int r1;

    printf("Enter NO. of Rows : ");
    scanf("%d", &r1);

    printf("Enter NO. of Columns : ");
    scanf("%d", &c1);

    
    int a[10][10];

    for (int i = 0; i < r1; i++)
    {
        for(int j = 0 ; j<c1 ; j++){
            scanf("%d " ,&a[i][j]);
        }
        printf("\n");
    }
    

    int r2;
    int c2;
    int arr[r2][c2];
    printf("Enter NO. of Rows : ");
    scanf("%d" , &r2);
    printf("Enter NO. of Columns : ");
    scanf("%d" , &c2);
    for(int i=0 ; i<r2  ; i++){
        for (int j = 0; j < c2; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
        
    }


    

    return 0;
}