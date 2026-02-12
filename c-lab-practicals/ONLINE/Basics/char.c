#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c ;
    scanf("%c"  , &c);
    if(c >= 'A' && c <= 'Z'){
        printf("Upper Case ");

    }
    else if(c >= 'a' && c <= 'z'){
        printf("Lower Case ");
    }
    else{
        printf("not english letter");
    }

    // print char from a to Z 
    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("\n %c" , i);
    }
    
    return 0;
}
