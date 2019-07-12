#include <stdio.h>
#include "stackADT.h"

int
main(void)
{
  Stack s1, s2;
  int n;

  s1 = create();
  s2 = create();

  push(s1, 1);
  push(s2, 2);

  n = pop(s1);
  printf("Popped %d from s1\n", n);

  push(s2, n);
  n = pop(s1);
  printf("Popped %d from s1\n", n);
  push(s2, n);

  destory(s1);

  while (!is_empty(s2)){
    printf("Popped %d from s2\n", n);
  }

  push(s2, 3);
  make_empty(s2);

  if (is_empty(s2)){
    printf("s2 is empty\b");
  } else {
    printf("s2 is not empty\n");
  }

  destory(s2);

  return 0;
}

