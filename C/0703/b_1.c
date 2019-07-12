
void
acon(const int *p)
{
  int j;
  *p = 0;/***WRONG***/
  p = &j;/***LEGAL***/
}

void
abcon(int const *p)
{
  int j;
  *p = 0;/***LEGAL***/
  p = &j;/***WRONG***/
}

void
abccon(const int const *p)
{
  int j;
  *p = 0;/***WRONG***/
  p = &j;/***WRONG***/
}

