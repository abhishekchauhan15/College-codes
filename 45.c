#include <stdio.h>
void rev(int n)
{
    int reverse = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed Number: %d", reverse);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n);
}