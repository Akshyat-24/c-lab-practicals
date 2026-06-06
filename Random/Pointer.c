#include<stdio.h>






int main()
{
    // int arr[3] = {5,10,15};
    // int *ptr = arr;


    // printf("%d\n" , ptr[0]);
    // printf("%d\n" , *(ptr+2));


    int arr[3] = {1,2,3}; n  

    int (*ptr)[3] = &arr;

    printf("%d\n" , (*ptr)[0]);
    printf("%d\n" , (*ptr)[1]);

    return 0;
}
