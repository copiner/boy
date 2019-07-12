
### 指针

c语言要求每个指针变量只能指向一种特定类型（引用类型）的对象
int *p /*p是指向int类型对象的指针变量*/

为了找到变量的地址，可以使用 &（ 取地址)运算符。如果x是变量，那么&x就是x在内存中的地址。

为了获得对指针所指向对象的访问，可以使用*（间接寻址）运算符。如果p是指针，那么*p表示p当前指向的对象。

声明指针变量是为指针留出空间，但是并没有把它指向对象。在使用前进行初始化至关重要。
```c
int i, *p;
...
p = &i;
```

```c
int i;
int *p = &i;
```
```c
int i, *p = &i;
```

```c
p = &i;
i = 1;

printf("%d\n", i);//1
printf("%d\n", *p);//1

*p = 2;
printf("%d\n", i);//2
printf("%d\n", *p);//2
```

```c
int *p;
printf("%d",*p)/***WRONG***/
```
```c
int *p;
*p = 1;/***WRONG***/
```

```c
int i, j, *p, *q;
p = &i;
q = p;/***q = p***/
*p = 1;
printf("%d", i);
printf("%d", *p);
*q = 2;
printf("%d", i);
printf("%d", *q);
printf("%d", *p);
```

```c
int i, j, *p, *q;
p = &i;
q = &j;

i = 1;

*q = *p;/***  *q = *p  ***/


printf("%d", i);
printf("%d", *q);
printf("%d", *p);
```


用指针作为函数的实际参数实际上并不新鲜，scanf函数调用中就已经使用。


```c
int i;
...
scanf("%d", &i);
```
把&放在i的前面以便给scanf函数传递指向i的指针，指针会告诉scanf函数把读取的值放哪里，
如果没有&运算符，传递给scanf函数的将是i的值。
```c
int i, *p;
...
p = &i;
scanf("%d", p);
```

用const保护参数
```c
void
no_change(const int *p)
{
  *p = 0; /*** WRONG ***/
}
```

指针作为函数返回值
```c
int
*max(int *a, int *b)
{
  if(*a > *b)
    return a
  else
    return b;
}

int
main(void)
{
  int *p, i, j;
  ....
  p = max(&i, &j);
}
```

```c
int
max(int *a, int *b) /***WRONG***/
{
  if(*a > *b)
    return a
  else
    return b;
}
```

```c
int
*m(void)
{
  int i;
  ...
  return &i;/*** WRONG ***/
}

```
一旦m返回， 变量i就不存在了，所以指向变量i的指针将是无效的。
