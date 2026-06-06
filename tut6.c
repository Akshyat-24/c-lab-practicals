#include <stdio.h>



struct result{
    char name[100];
    int m1,m2;
};

    

int main() {
 int n;
 scanf("%d" , &n);
 struct result marks[n];


 for (int  i = 0; i < n; i++)
 {
    scanf("%s %d %d" , &marks[n].name , &marks[n].m1 , &marks[n].m2);
 }
 
 

    return 0;
}



LK.o