#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;
 
  puts("There is Alpha: ");

  for (int i=0; i<size; i++)
    if(isalpha(i))
      putchar(i);

  return 0;
}
