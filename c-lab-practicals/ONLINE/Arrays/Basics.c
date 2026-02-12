#include<stdio.h>

int main(int argc, char const *argv[])
{
    // ?Arrays
    // Collection of similar data types(same only ) stored at contigious(continous) memory location  

    // Input and output 
    int prices[3];
    
    printf("Enter Price of 3 items : ");
    scanf("%d" , &prices[0]);
    scanf("%d" , &prices[1]);
    scanf("%d" , &prices[2]);

    int sum = prices[0]+prices[1]+prices[2];
    printf("%d" ,sum);
    return 0;
}
