#include <stdio.h>
void str(char s[]){
    int c = 0;
    while (s[c] != '\0')
    c++;

  printf("Length of the string: %d\n", c);

}
int main()
{
  char s[1000];
  printf("Input a string\n");
  gets(s);

  str(s[1000]);

 

  return 0;
}