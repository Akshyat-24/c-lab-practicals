#include<stdio.h>
#include<stdbool.h>


int main(int argc, char const *argv[])
{
    // for string make an array 

    int a ; 
    char ch;
    float f;
    char s1[20]; // Array n 
    bool flag  = true ;  //Header file of boolean  - #include<stdbool.h>
    double d;
    scanf("\n%d" , &a);
    scanf("\n%c" , &ch);
    scanf("\n%f" , &f);
    scanf("\n%s" , &s1);
    scanf("\n%lf" , &d);


    printf("\n int : %d" , a);
    printf("\n char : %c" , ch);
    printf("\n float : %f" , f);
    printf("\n string : %s" , s1);
    printf("\n double : %lf"  , d);   
    printf("\n Boolean : %d" , flag);
    return 0;
}
