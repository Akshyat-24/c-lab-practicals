// #include<stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int *ptr = (int *)malloc(n * sizeof(int));

//     for(int i = 0; i < n; i++) {
//         scanf("%d", ptr + i);
//     }

//     int index, value;
//     scanf("%d %d", &index, &value);
    
//     ptr = (int *)realloc(ptr, n * sizeof(int));
//     *(ptr + index) = *(ptr + index) + value;

//     for(int i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));
//     }
//     free(ptr);

//     return 0;
// }













#include<stdio.h>
#include<stdlib.h>


void updateStock( int n , int change , int *arr){
for(int index = 0 ; index < n ;index++){

    *(arr+index) += change;
}

}
int main(int argc, char const *argv[])
{
   
    int n;
    scanf("%d" ,&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
 int change;
 scanf("%d" ,  &change);
    updateStock( n , change , arr);

    for (int i = 0; i < n; i++)
    {
       printf("%d " , arr[i]);
    }
    
    

    

    
    return 0;
}
