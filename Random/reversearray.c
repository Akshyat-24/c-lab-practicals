#include<stdio.h>


void reversearray( int *a , int size , int target){
    
   for (int i = 0; i < size; i++)
   {
    if(*(a+i) ==  target){
        printf("Found");
    }
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

    int target ;
    scanf("%d" , &target);
    reversearray(arr , n , target);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d " , arr[i]);
    // }
    


    
    return 0;
}
