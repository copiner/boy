#include <stdio.h>
#include <stdlib.h>

void
decompose(double x, long int_part, double frac_part);

void
decompose(double x, long int_part, double frac_part)
{
  int_part = (long) x;
  frac_part = x - int_part;
}

void
main(){
  decompose(3.14159, i, d);
}


