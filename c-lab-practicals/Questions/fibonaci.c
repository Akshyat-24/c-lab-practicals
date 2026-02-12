#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x ;
    scanf("%d" ,  &x);
    int a =0;
    int b = 1;
    int c;
    for(int i = 0 ; i < x;i++){
        printf("%d " ,a );
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}
