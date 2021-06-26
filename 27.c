#include <stdio.h>
#include <string.h>

int main()
{
    float area;
    int l, b, r, h;
    char shape[20];
    printf("enter the length and breath of rectangle:");
    scanf("%f%f", &l, &b);
    printf("enter the radius of circle: ");
    scanf("%f", &r);
    printf("enter the shape: ");
    scanf("%s", &shape);

    switch (shape)
    {
    case "circle":
        area = 3.14 * r * r;
        printf("area of circle %f \n", area);
        break;

    case "triangel":
        area = 1 / 2 * b * h;
        printf("area of circle %f \n", area);
        break;

    case "rectangle":
        area = l * b;
        printf("area of rectangle %f \n", area);

        break;

    default:
        break;
    }

    return 0;
}