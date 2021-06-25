#include <stdio.h>
int main() {
    int ageM, ageF;
    printf("enter the age of male:");
    scanf("%d", &ageM);
    printf("enter the age of female:");
    scanf("%d", &ageF);

    if(ageM>=21 && ageF>=18)
    printf("Yes they are elegible");

    else
    printf("No they are not elegible");

   return 0;
}