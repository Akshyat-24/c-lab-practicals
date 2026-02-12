#include<stdio.h>


void calculate(int a , int b, int *sum , int *product , int *avg);

int main(int argc, char const *argv[])
{
    // Write a function to calculate the sum , product and avg of 2 no.s .print the avg in the main fx
    
    int a= 3;
    int b = 5;
    int sum , avg , product ;
    calculate(a,b ,&sum , &product, &avg);
    // Call by refrence so value will be same it changes original 
    printf("\n%d" , avg);
    return 0;
}


void calculate(int a , int b, int *sum , int *product , int *avg){
    *sum = a+b;
    *product = a*b;
    *avg = (a+b)/2;
    printf("%d,%d,%d", *sum , *product , *avg);
}