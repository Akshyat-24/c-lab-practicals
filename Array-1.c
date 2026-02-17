#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n , pos;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
    scanf("%d" , &arr[i]); 
    }

    // for (int i = 0 ; i <n;i++){
    // printf("%d " , arr[i]);
    // }
    
    printf("Enter Position : ");
    scanf("%d", &pos);
    
    // for (int i = 0; i < n; i++)
    // {
    //     if(pos == i){
    //         printf("%d" , arr[i-1]);
    //     }
    // }

    printf("%d" , arr[pos]);
    return 0;
}
