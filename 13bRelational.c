#include <stdio.h>
int main() {
    int a,b,add, sub, multi, div;
    printf("enter the value fof a and b:");
    scanf("%d%d", &a,&b);

    if(a==b)
    printf("%d = %d \n",a,b);

    if(a<b)
    printf("%d <%d \n",a,b);

    if(a<=b)
    printf("%d <= %d \n",a,b);

    if(a>b)
    printf("%d > %d \n",a,b);

    if(a>=b)
    printf("%d>= %d \n",a,b);

    if(a!=b)
    printf("%d != %d \n",a,b);


    


   
   
   return 0;
}