//opening file.dat for write
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     char filename[] = "file.dat";
//     fptr = fopen(filename, "w");
//     if (fptr == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }
//     fprintf(fptr, "Hello, this is a test file.\n");
//     fprintf(fptr, "hey we can write this to the file.\n");
//     fclose(fptr);
//     return 0;

// }



// use of fgets()
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     char line[1000];
//     fptr = fopen("file.dat", "r");
//     if (fptr == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }
//     while (fgets(line,1000,fptr) != NULL)
//     {
//         printf("Read line %s\n",line);
//     }
//     fclose(fptr);
//     return 0;
// }



// use of fputs()
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     char filename[] = "file.dat";
//     fptr = fopen(filename, "w");
//     if (fptr == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }
//     fputs("Hello, this is a test file.\n", fptr);
//     fputs("hey we can write this to the file.\n", fptr);
//     fclose(fptr);
//     return 0;
// }



// use of fgetc()
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     char filename[] = "file.dat";
//     fptr = fopen(filename, "r");
//     if (fptr == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }
//     char c;
//     while ((c = fgetc(fptr)) != EOF)
//     {
//         printf("%c", c);
//     }
//     fclose(fptr);
//     return 0;
// }


#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("file.dat", "r");

    fseek(fp, 2, SEEK_SET);
    int n = 10;
    while (n>0)
    {
        ch = fgetc(fp);
        printf("%c", ch);
        n--;
    }
    printf("\nPointer at position: %ld\n", ftell(fp));
    fclose(fp);
    return 0;
}    