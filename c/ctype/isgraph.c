#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;
  
  for (int i=0; i<size; i++)
    if(isgraph(i))
      printf("-%d, %c:", i, i);

  return 0;
}
