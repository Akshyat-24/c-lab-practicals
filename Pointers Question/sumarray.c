#include<stdio.h>


void sumArray(int *a , int size){
    int sum = 0 ;
    for(int i = 0 ; i<size ;i++){
        sum += *(a+i);
    }
    printf("%d" , sum);
}


int main()
{
    
     int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sumArray(arr, n);
    return 0;
}
