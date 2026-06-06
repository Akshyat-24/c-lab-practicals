#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    scanf("%d", &num);

    int *ptr = (int*)realloc(arr, num * sizeof(int));

    // if (ptr == NULL) {
    //     printf("Realloc failed\n");
    //     return 1;
    // }

    for (int i = n; i < num; i++)
    {
        printf("Enter value for index %d:\n", i);
        scanf("%d", &ptr[i]);
    }

    
    for (int i = 0; i < num; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr); 

    return 0;
}