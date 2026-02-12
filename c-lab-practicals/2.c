#include<stdio.h>
   
int main()
{
    int x = 5;
    int y = 2;
    float f = (float)x/y;
    // printf("\n%f" , f);
// int  , float -> 4 bytes

    printf("\n%d" , sizeof(7)); //4 bytes     
    printf("\n%d" , sizeof(7.5)); // Directly by default double -> 8 bytes
     
    return 0;
}
