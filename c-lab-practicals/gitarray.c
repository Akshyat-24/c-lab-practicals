#include<stdio.h>


int main(int argc, char const *argv[])
{
    int arr[20];
    printf("Enter no. of elements :");
    int n  , choice;

    do
    {
        printf("\n Exit");
        printf("\n Create Data");
        printf("\n Display Data");
        printf("\n Enter Your Choice");
        scanf("%d" , &choice);
    } while (choice);
    
    scanf("%d"  , &n);
    {
        printf("\n ENter element NO. %d" , i+1);
        scanf("%d" , &arr[i]);
    }

    printf("\nArray Elements are : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d" , arr[i]);
    }
    
    
    return 0;
}
