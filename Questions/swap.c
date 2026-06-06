#include<stdio.h>

void sw(int a, int b){
    int temp = a;
    a = b; 
    b = temp;
    printf("Inside sw: a = %d b = %d\n", a, b);
}

void swp(int *a, int *b){
    int temp = *a;
    *a = *b; 
    *b = temp;
    printf("Inside swp: a = %d b = %d\n", *a, *b);
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    sw(a, b);        // pass by value
    swp(&a, &b);     // pass by reference

    printf("Final: %d %d", a, b);
    
    return 0;
}