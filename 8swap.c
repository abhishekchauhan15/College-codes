#WAP to swap two numbers
#include <stdio.h>
int main() {
    int a,b;
    int temp;

    printf("enter two number:");
    scanf("%d%d", &a, &b);

    temp=a;
    a=b;
    b=temp;

    printf("a= %d , b= %d", a ,b);
   
   return 0;
}
