#include<stdio.h>


void main()
{
    struct complex
    {
        float real ;
        float cmplex;
    }a,b,c;

    scanf("%f%f" , &a.real , %a.cmplex);
    scanf("%f%f" , &b.real , %b.cmplex);
    
    c.real = a.real +b.real;
    c.cmplex = a.cmplex +b.cmplex;
    printf("\n%f+%fj" , c.real , c.cmplex);
}
int main()
{
    
    return 0;
}
