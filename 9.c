#include <stdio.h>
int main(){
    int base,gross,promotion=5000;

    printf("enter your base salary: ");
    scanf("%d", &base);

    gross=base+promotion;

    printf("your gross salary is %d", gross);

    return 0;
}