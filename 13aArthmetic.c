//WAP for addition ,substraction , multiplication , division 
#include <stdio.h>
int main() {
    int a,b,add, sub, multi, div;
    printf("enter the value fof a and b:");
    scanf("%d%d", &a,&b);

    add=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;

    printf("Addition: %d + %d = %d \n", a, b, add);
    printf("Substraction: %d - %d = %d \n", a, b, sub);
    printf("Multiplication:%d * %d = %d \n", a, b,multi);
    printf("Division: %d / %d = %d \n", a, b,div);
   
   return 0;
}
