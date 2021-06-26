#include <stdio.h>
int main() {
    char status,gender;
    int age;
    printf("enter your status: ");
    scanf("%c", &status);

    if(status=='M'|| status=='m')
    printf("yes you eill get insurance");

    else if(status=='N' || status=='n'){
        printf("enter your gender: ");
        printf("enter your age: ");
        scanf("%c",&gender);
        scanf("%d",&age);

        if(gender=='M' || gender=='m'){
            if(age>=30)
                printf("Yes you will get insurenace");
            else
            printf("no you will not get insurenace");

        }else if(gender=='F' || gender=='f'){
            if(age>=20)
                printf("Yes you will get insurenace");
            else
            printf("no you will not get insurenace");
        }


    }
    
    

   return 0;
}