#include<stdio.h>


void reversearray( int *a , int size){
    
    int start = 0 ;
    int end = size-1;
    
    while(start < end ){
        int temp = *(a+start);
        *(a+start) =  *(a+end);
        *(a+end) =  temp;

        start++;
        end--;

    }
    
    
    
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reversearray(arr , n);

    for (int i = 0; i < n; i++)
    {
        printf("%d " , arr[i]);
    }
    

    return 0;
}
