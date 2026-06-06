#include<stdio.h>


int circle(int n){
    float arrea = 3.14 *n*n;
    float circum = 2*3.14*n;
    printf("%.2f %.2f" , arrea , circum);
}

int main()
{
    int n;
    scanf("%d" , &n);
    circle(n);
    return 0;
}
