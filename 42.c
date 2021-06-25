#include<stdio.h>
#define PI 3.14

void circle( float radius){
    float area = PI * radius * radius;

     
     printf("Area of Circle = %.2f cm\n", radius,area);

}


void rectangle(float len, float wid){
     float area = len * wid;
     printf("Area of Rectangle= %.3f cm\n",area);


}

void triangle(float b,float h){
     float area = (0.5 * b * h);
    printf("Area of triangle= %.2f cm\n",area );
}


int main()
{

     float radius;
     printf("Enter Radius of Circle(in cm): ");
     scanf("%f",&radius);

     circle(radius);


    float len, wid;
     printf("Enter length & width of Rectangle (in cm): ");
     scanf("%f %f",&len,&wid);
     rectangle(len, wid);


     float b, h;
    printf("Enter base and height (in cm): ");
     scanf("%f %f", &b, &h);
     triangle(b,h);

     
     

    


     

     return 0;
 }