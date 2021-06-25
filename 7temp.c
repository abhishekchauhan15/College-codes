#include <stdio.h>
int main() {

    //c to f
    float fa,c;
    printf("enter the temp in c");
    scanf("%f",&c);
    fa=(c*9/5) + 32 ;
    printf("temperature in F is: %f" ,fa);
   
   return 0;
}   