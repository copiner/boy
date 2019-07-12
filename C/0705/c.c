/*strlen*/

size_t strlen(const char *s)
{
  size_t n;

  for (n = 0; *s != '\0'; s++){
    n++
  }

  return n;
}

size_t strlen(const char *s)
{
  size_t n = 0;

  for (; *s != '\0'; s++){
    n++
  }

  return n;
}
/*

 *s != '\0'
 == 
 *s != 0
 ==
 *s

*/
size_t strlen(const char *s)
{
  size_t n;

  for (; *s; s++){
    n++
  }

  return n;
}

size_t strlen(const char *s)
{
  size_t n;

  for (; *s++;){
    n++
  }

  return n;
}

size_t strlen(const char *s)
{
  size_t n = 0;

  while (*s++)
    n++;
  return n;
}

size_t strlen(const char *s)
{
  const char *p = s;
  
  while (*s)
    s++;
  return s - p;
}

size_t strlen(const char *s)
{
  const char *p = s;
  
  while (*s++) /***WRONG THINK***/
    ;
  return s - p;
}
