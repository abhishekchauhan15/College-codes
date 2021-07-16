//WAP to calculate Simple Interst 
#include <stdio.h>
int main() {
    float s, p, t, r;
    printf("enter principal amount , time(in years) , rate of intrest:");
    scanf("%f%f%f", &p,&t ,&r);

    s=p*r*t;
    printf("Simple interst will be %f" ,s);

   
   return 0;
}
