#include <stdio.h>
int main() {
    int a=9,b,c=4;

    b=a++;
    printf("%d \n",b);

    b=a--;
    printf("%d \n",b);

    printf("%d",a);




   return 0;
}