#include <stdio.h>
int main() {
    int a,b,c,ans;
    printf("enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    ans=(a>b && a>c) ? (a) : ((b>c)? (b): (c));

    printf("greatest is : %d", ans);
    

   return 0;
}
