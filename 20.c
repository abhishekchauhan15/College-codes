#include <stdio.h>
int main() {
    char status,gender;
    int age;

    printf("Enter your status ");
    scanf("%c", &status);


    if(status=='M' || status=='m')
    printf("NO");

    if(status=='n' || status=='N'){
        printf("Enter your gender ");
        printf("Enter your age ");
        scanf("%c", &gender);
        scanf("%d", &age);

    }
    
    else if(status=='N' || status=='n'){
        if(gender=='M' || gender=='m' ){
            if(age>=21){
                printf("YES");
            }else 
            printf("NO");

        }else if(gender=='F' || gender=='f' ){
            if(age>=18){
                printf("YES");
            }else 
            printf("NO");
        }
    }

    
    

   return 0;
}