#include<stdio.h>



int swapp(int x , int y){
    int t;
    t = x;
    x = y;
    y = t;

    printf("%d %d" , x,y);
    
}


int main()
{
    
    int a = 10 , b = 20;
    swapp(a,b);
    printf("\n%d %d" , a,b);

    return 0;
}
