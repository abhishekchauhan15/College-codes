#include <stdio.h>
int main() {
    int eng,math,cs,phy,chem;
    float per=0;
    printf("enter the marks of you subjects: ");
    scanf("%d%d%d%d%d" ,&eng,&math,&cs,&phy,&chem );
    
    per=(eng+math+cs+phy+chem)/5;

    printf("Your percentage is %f", per);

   
   return 0;
}