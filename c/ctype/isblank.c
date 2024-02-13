#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 128;

  for (int i=0; i<size; i++)
    if (isblank(i))
      printf("%d:%c;\n", i, i);

  return '\0';
}
