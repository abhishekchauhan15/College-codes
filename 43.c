#include <stdio.h>
void sumdig(int n){
    int  sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum is=%d", sum);

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    sumdig(n);
    
    return 0;
}