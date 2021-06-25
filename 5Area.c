#include <stdio.h>
int main() {
    float area=0,parameter=0;
    float l,b,r;
    printf("enter the length and breath of rectangle:");
    scanf("%f%f", &l, &b);
    printf("enter the radius of circle: ");
    scanf("%f", &r);

    area=l*b;
    parameter=2*(l+b);
    printf("area of rectangle %f \n",area );
    printf("parameter of rectangle  %f \n",parameter);

    area=3.14*r*r;
    parameter=2*3.14*r;
    printf("area of circle %f \n",area );
    printf("parameter of circle %f \n",parameter);



    

   
   return 0;
}