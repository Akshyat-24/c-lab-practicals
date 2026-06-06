#include<stdio.h>


int linearsearch(int *a , int size , int key){
     
    for(int i = 0 ; i<size ;i++){
       if( *(a+i) == key){
        return i;
    }
    

    }
    return -1;
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
    
    int key ;
    scanf("%d" , &key);
    int index = linearsearch(arr, n , key);
    printf("%d" , index);
   
    
    return 0;
}
