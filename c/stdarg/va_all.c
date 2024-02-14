#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

size_t strlength(const char *string)
{
  size_t length = 0;

  for (; *string; string++, length++);

  return length;
}

void strconnect(char *dest, const char *src)
{
  for (; *dest; dest++);
  for (; *src; *dest++ = *src++);
}

void PrintInts(int argc, ...)
{
  va_list val, val_count;
  va_start(val, argc);
  int count = argc;

  va_copy(val_count, val);

  for (int i=0, arr[argc]; i<argc; i++) {
    arr[i] = va_arg(val_count, int);
    printf("[%d]:%d, ", i, arr[i]);
  }

  va_end(val_count);
  printf("\n");

  const char *format = "[%d]";

  char *buffer = malloc(strlength(format) * count + 1);

  buffer[0] = 0;

  while(count--) strconnect(buffer, format);

  printf(format, argc);
  vprintf(buffer, val);

  free(buffer); // valgrind ./a.out

  va_end(val);
}

int main()
{
  PrintInts(3, 1, 2, 3);

  return 0;
}
