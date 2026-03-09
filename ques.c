#include<stdio.h>

int main(){
    // int sub1, sub2, sub3, sub4, sub5;

    // scanf("%d", &sub1);
    // scanf("%d", &sub2);
    // scanf("%d", &sub3);
    // scanf("%d", &sub4);
    // scanf("%d", &sub5);

    // int total = sub1 + sub2 + sub3 + sub4 + sub5;

    // float percentage = (total / 500.0) * 100;   

    // printf("%f", percentage); 

    float sal ; 
    printf("Enter The salary :");

    scanf("%d" , &sal );

    printf();










    char gender ;
    int service ;
    printf("Male or Female (M Or F) : ");
    scanf("%c" , &gender);

    printf(" Enter Years of Service : ");
    scanf("%d" , &service);



    if (gender =='M'){
        if (service >=10)
        {
            printf("Post-Graduate With Salary : 15000 \n");
        }
        else if (service < 10){

            printf("Graduate with Salary 7000 \n");
        }
        

    if (gender == 'F'){
        if(service >= 10 ){
            printf("Post - Graduate with salary : \n");
        }
        else if (service < 10 ){
            printf(" Graduate with salary with 9000 \n");
        }
    }



    return 0;
}
}