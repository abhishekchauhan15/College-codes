//WAP to change m,cm,inch into KM 
#include <stdio.h>
int main() {
    int km,m,cm,inch,feet;
    printf("enter the length in KM: ");
    scanf("%d", &km);

    m= 1000*km;
    cm=100000*km;
    inch=39370.1*km;

    printf("in m %d m \n", m);
    printf("in cm %d cm\n", cm);
    printf("in inch %d inch \n", inch);

   
   return 0;
}
