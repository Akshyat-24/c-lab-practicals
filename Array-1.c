#include<stdio.h>

int main(int argc, char const *argv[])
{
    // int n , pos;
    // scanf("%d", &n);
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    // scanf("%d" , &arr[i]); 
    // }

    // for (int i = 0 ; i <n;i++){
    // printf("%d " , arr[i]);
    // }
    
    // printf("Enter Position : ");
    // scanf("%d", &pos);

    // for (int i = 0; i < n; i++)
    // {   
    //     if(pos == i){
    //         printf("%d" , arr[i-1]);
    //     }
    // }

    // printf("%d" , arr[pos]);


    // return 0;


    {
    int arr[20], n, choice,m;

    do
    {
        printf("\n0 Exit");
        printf("\n1 Create Data");
        printf("\n2 Display Data");
        printf("\n3 Count Data");
        printf("\n4 Append Data");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            break;

        case 1:
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            for (int i = 0; i <= n; i++)
            {
                printf("\n enter element number %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            printf("\n Array Elements Are: ");
            for (int i = 0; i <= n; i++)
            {
                printf(" %d ", arr[i]);
            }
            break;
            case 3:
            printf("\nCount: %d",n);
            break;
            case 4:
            printf("Enter the number of elements you want to append: ");
            scanf("%d",&m);
            for (int i = 0; i <= n+m; i++)
            {
                printf("\n enter element number %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            n=n+m;
            break;
            default:
            printf("\nEnter Valid Choice! ");
        }
    } while (choice!=0);
}
}
