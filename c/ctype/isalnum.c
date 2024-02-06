#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t  size = 256;

  printf("There is alpha and number: ");

  for (int i=0; i<size; i++)
    if (isalnum(i)) 
      putchar(i);

  printf("\nThere is NOT alpha and number: ");

  for (int i=0; i<size; i++)
    if(i!=27)
      putchar(i);

  return 0;
}
