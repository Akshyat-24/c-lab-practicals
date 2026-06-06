#include <stdio.h>

int isPalindrome(int *a, int size)
{
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        if(*(a + start) != *(a + end))
        {
            return 0;  // not palindrome
        }

        start++;
        end--;
    }

    return 1;  // palindrome
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

    int ans = isPalindrome(arr, n);

    printf("%d", ans);

    return 0;
}