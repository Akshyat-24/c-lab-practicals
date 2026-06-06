#include<stdio.h>


void evenandodd(int *a , int size , int *even , int *odd){
     *even = 0 ;
     *odd = 0;
    for(int i = 0 ; i<size ;i++){
       if(*(a+i) % 2 == 0 ){
        (*even)++;
       }
       else{
        (*odd)++;
       }

    }
    
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
    int even = 0 , odd = 0;

    evenandodd(arr, n , &even , &odd);

    printf("Even : %d\n" , even);
    printf("odd : %d" , odd);
    return 0;
}
