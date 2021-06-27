#include <stdio.h>

void rev(char s[],char r[]){
    int begin, end, count = 0;
      while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);

}
int main()
{
   char s[1000], r[1000];
   

   printf("Input a string\n");
   gets(s);


   rev(s[1000],r[1000]);


 

   return 0;
}