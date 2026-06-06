#include<stdio.h>

int sumofd(int n){
    int sum = 0;

    
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }

    
    if(sum < 10){
        return sum;
    }


    return sumofd(sum);
}

int main()
{
    int n;
    scanf("%d", &n);

    int x = sumofd(n);
    printf("%d", x);

    return 0;
}