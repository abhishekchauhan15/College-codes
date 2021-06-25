#include <stdio.h>
int main() {
    int a,b,c,ans;
    printf("enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b){
        if(a>c)
        printf("A is greatest");

        else
        printf("C is greatest");

    }else if(b>a){
        if(b>c)
        printf("B is greatest");

        else
        printf("C is greatest");

    }

    

   return 0;
}