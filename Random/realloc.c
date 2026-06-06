// #include<stdio.h>
// #include<stdlib.h>


// int main(int argc, char const *argv[])
// {
//     int *ptr ;
//     int n = 3;

//     ptr = (int*)malloc(n*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         ptr[i] = i+1;
//     }
    
//     //Resize to 5 elements 
//     ptr = (int*)realloc(ptr , 5*sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         ptr[i]  = i+1 ;

//     }



//     printf("After realloc:\n");

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d" , ptr[i]);
//     }


//     free(ptr);

    
    

//     return 0;
// }





#include<stdio.h>
#include<stdlib.h>


int main()
{

    
   int n ;
   printf("Enter number of students : ");
   scanf("%d" , &n);

   int *marks = (int*)malloc(n* sizeof(int));

   for (int i = 0; i < n; i++)
   {
    printf("Enter marks of student %d : " , i+1);
    scanf("%d" , &marks[i]);
   }

   printf("Marks : \n");
   for (int i = 0; i < n; i++)
   {
    printf("%d" , marks[i]);
   }

   free(marks);
   
   
   

    
    

    return 0;
}
