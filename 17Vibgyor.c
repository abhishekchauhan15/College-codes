#include <stdio.h>
int main() {
    char a;
    printf("enter the alphabet: ");
    scanf("%c", &a);

    switch (a)
    {
    case 'v':
        printf("Vilote");
        break;
    case 'i':
        printf("indigo");
        break;
    case 'b':
        printf("blue");
        break;
    case 'g':
        printf("green");
        break;
    case 'y':
        printf("yellow");
        break;
    case 'o':
        printf("orange");
        break;
    case 'r':
        printf("red");
        break;
    
    default:
        printf("this soes  not come in vibgyor");
        break;
    }
    

   return 0;
}