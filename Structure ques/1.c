#include<stdio.h>



struct student{
    int roll;
    char name[100];
    int s1 , s2 , s3;
    float avg;
    float total;

};

int main(){

    int n ;
    scanf("%d" , &n);
    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d %d %d" , &s[i].roll,s[i].name,&s[i].s1,&s[i].s2,&s[i].s3 );

        s[i].total = s[i].s1 + s[i].s2 + s[i].s3;
        s[i].avg = s[i].total/3.0;
    }
    int avg1 = 0;

    for (int i = 0; i < n; i++)
    {
        avg1 += s[i].avg;
    }

    avg1 = avg1/n;

    for (int i = 0; i <  n; i++)
    {
       if(s[i].avg > avg1){
        printf("%s" , s[i].name);
       }
    }
    
    

   
    
    return 0;


}


// #include<stdio.h>




// struct student
// {
//         int roll;
//         char name[10];
//         int s1,s2,s3;
//         float avg ;
//         float total;
// };

// int main(){


//     int n ;
//     scanf("%d" , &n);
//     struct student s[n];

//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d %s %d %d %d  " , &s[i].roll,s[i].name,&s[i].s1,&s[i].s2,&s[i].s3 );

//        s[i].total = 0; 
//        s[i].avg = 0; 
//        s[i].total=s[i].s1+s[i].s2+s[i].s3; 
//        s[i].avg=s[i].total/3.0;
//     }

//     float avg1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         avg1 = avg1 + s[i].avg;
//     }

//     avg1 = avg1/n;

//     for (int i = 0; i < n; i++)
//     {
//         if(s[i].avg > avg1){
//             printf("%s" , s[i].name);
//         }
//     }
    
    
    
// }