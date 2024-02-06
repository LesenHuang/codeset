#include <stdio.h>
#include <stdlib.h>

void copy1(char src[], char dest[], size_t size)
{
  while(size--)
    *dest++ = *src++;
  printf("%d %d\n", *--src, *--dest);
}

void copy(const char *src, char *dest, size_t size)
{
  
  size_t block_size = 8;
  size_t block = size / block_size;

  switch(size%block_size) {
             
    case 0: do { *dest++ = *src++;
    case 7: *dest++ = *src++; 
    case 6: *dest++ = *src++;
    case 5: *dest++ = *src++;
    case 4: *dest++ = *src++;
    case 3: *dest++ = *src++;
    case 2: *dest++ = *src++;
    case 1: *dest++ = *src++; } while(block--);

  }
  
}

int main()
{
  size_t size = 1;
  char dest[size], src[size];

  int i;
  char arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
  for (i=0; i<size; i++)
    src[i] = arr[i];

  copy(src, dest, size);

  for (i=0; i<size; i++)
    printf("%d\t%d\n", src[i], dest[i]);

  return 0;
}
