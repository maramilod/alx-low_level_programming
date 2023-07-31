#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
<<<<<<< HEAD

=======
>>>>>>> 52f42c6f51eb054bb2581a96ac9fb8c90da96851
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
<<<<<<< HEAD
  a[2] = 98;
=======
  *(p + 5) = 98;
>>>>>>> 52f42c6f51eb054bb2581a96ac9fb8c90da96851
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
