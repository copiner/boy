
### ָ��

c����Ҫ��ÿ��ָ�����ֻ��ָ��һ���ض����ͣ��������ͣ��Ķ���
int *p /*p��ָ��int���Ͷ����ָ�����*/

Ϊ���ҵ������ĵ�ַ������ʹ�� &�� ȡ��ַ)����������x�Ǳ�������ô&x����x���ڴ��еĵ�ַ��

Ϊ�˻�ö�ָ����ָ�����ķ��ʣ�����ʹ��*�����Ѱַ������������p��ָ�룬��ô*p��ʾp��ǰָ��Ķ���

����ָ�������Ϊָ�������ռ䣬���ǲ�û�а���ָ�������ʹ��ǰ���г�ʼ��������Ҫ��
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


��ָ����Ϊ������ʵ�ʲ���ʵ���ϲ������ʣ�scanf���������о��Ѿ�ʹ�á�


```c
int i;
...
scanf("%d", &i);
```
��&����i��ǰ���Ա��scanf��������ָ��i��ָ�룬ָ������scanf�����Ѷ�ȡ��ֵ�����
���û��&����������ݸ�scanf�����Ľ���i��ֵ��
```c
int i, *p;
...
p = &i;
scanf("%d", p);
```

��const��������
```c
void
no_change(const int *p)
{
  *p = 0; /*** WRONG ***/
}
```

ָ����Ϊ��������ֵ
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
һ��m���أ� ����i�Ͳ������ˣ�����ָ�����i��ָ�뽫����Ч�ġ�
