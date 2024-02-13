c standard ctype head
---------------------

**directory**

     1. isalnum.c
     2. isalpha.c
     3. iscntrl.c
     4. isdigit.c
     5. isgraph.c
     6. islower.c
     7. isprint.c
     8. ispunct.c
     9. isspace.c
    10. isupper.c
    11. isxdigit.c
    12. tolower.c
    13. toupper.c

* **function isalnum**

```c
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
```

* **function isalpha**

```c
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
```

* **function iscntrl**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;

  for (int i=0; i<size; i++)
    if (iscntrl(i))
      printf("%d-", i);
    
  return 0;
}
```

* **function isprint**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;

  for (int i=0; i<size; i++)
    if (isprint(i))
      printf("-%d, %c:", i, i);

  return 0;
}
```

* **function isdigit**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;

  for (int i=0; i<size; i++)
    if(isdigit(i))
      putchar(i);

  return 0;
}
```

* **function isgraph**

```c
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
```

* **function islower**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;
  for (int i=0; i<size; i++) 
    if (islower(i))
      putchar(i);

  return 0;
}
```

* **function isupper**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;

  for (int i=0; i<size; i++)
    if (isupper(i))
      putchar(i);

  return 0;
}
```

* **function isspace**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;

  for (int i=0; i<size; i++)
    if (isspace(i))
      printf("-%d,%c:", i, i);

  return 0;
}
```

* **function ispunct**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;
  
  for (int i=0; i<size; i++)
    if (ispunct(i))
      putchar(i);

  return 0;
}
```

* **function isxdigit**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;

  for (int i=0; i<size; i++)
    if (isxdigit(i))
      putchar(i);

  return 0;
}
```

* **function tolower**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;

  for (int i=0; i<size; i++)
    if (isupper(i))
      putchar(tolower(i));

  return 0;
}
```

* **function toupper**

```c
#include <ctype.h>
#include <stdio.h>

int main()
{
  size_t size = 256;
  for (int i=0; i<size; i++) 
    if (islower(i))
      putchar(toupper(i));

  return 0;
}
```
