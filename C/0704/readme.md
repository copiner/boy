
### 指针和数组

指针可以指向数组元素
```c
int a[10], *p;
...
p = &a[0];
*p = 5;
```
把5存入a[0]中。

#### 指针算术运算（地址算术运算）

指针加上整数

指针p加上整数j,产生指向特定元素的指针，这个特定元素是p原先指向的元素后的j个位置。更确切地说，如果p指向数组元素a[i],那么p+j指向a[i + j](当然，前提是a[i + j]必须存在）。

指针减去整数

如果p指向数组元素a[i],那么p - j指向a[i - j]。

两个指针相减

当两个指针相减时，结果为指针之间的距离（用数组元素的个数来度量）。因此，如果p指向a[i],且q指向a[j],那么p-q就等于i-j。

```c
p = &a[5];
q = &a[1];

i = p - q;/*i is 4*/
i = q - p;/*i is -4*/
```
在一个不指向任何数组元素的指针上执行算术运算会导致未定义的行为，此外，只有两个指针指向同一个数组时，把他们相减才有意义。

#### 指针比较
可以用关系运算符（<、<=、>、>=）和判断运算符（==、!=）进行指针比较。

只有在两个指针指向同一个数组时，用关系运算符进行指针比较才有意义。比较结果依赖于数组中两个元素的相对位置。例如，在下面的赋值后p <= q的值是0，而p >= q的值是1。
```c
p = &a[5];
q = &a[0];
```
#### 指向复合常量的指针
```c
int *p = (int []){3,0,3,4,1};

==

int a[] = {3,0,3,4,1};
int *p = &a[0];

```

#### 指针用于处理数组
```c
#define N 10
...
int a[N],sum,*p;
...
sum = 0;
for(p = &a[0]; p < &a[N]; p++){
      sum += *p;
}
```

#### *运算符 与 ++运算符

后缀++的优先级高于*
```
*p++ / *(p++)	自增前表达式的值*p,以后再自增p
(*p)++ 		自增前表达式的值*p,以后再自增*p

*++p / *(++p)	先自增p, 自增后表达式的值是*p
++*p / ++(*p)	先自增*p, 自增后表达式的值是*p
```
```c
for(p = &a[0]; p < &a[N]; p++){
      sum += *p;

==

p = &a[0];
while (p < &a[N])
  sum += *p++;
```

#### 用数组名作为指针
指针的算术运算是数组和指针之间相互关联的一种方法，但这不是两者之间唯一的联系，数组名字可以作为指向数组第一个元素的指针（是数组第一个元素的地址）

```c
int a[10];
*a = 7; /*store 7 in a[0]*/

*(a + 1) = 12; /*store 12 in a[1]*/
```

```c
for(p = &a[0]; p < &a[N]; p++){
      sum += *p;

==

for (p = a; p < a + N; p++)
    sum+= *p;
```

虽然可以把数组名用作指针，但是不能给数组名赋新的值。试图使数组名指向其他地方是错误的
```c
while (*a != 0)
      a++; /***WRONG***/
```
但是，可以这样
```c
p = a;
while (*p != 0)
      p++;
```

#### 用指针作为数组名

```c
#define N 10
...
int a[N], i,sum = 0, *p = a;
...
for (i = 0; i < N; i++)
    sum += p[i];
```

### 指针和多维数组

数组初始化为0
```c
int a[NUM_ROWS][NUM_COLS];
int row, col;
...
for (row = 0; row < NUM_ROWS; row++)
    for(col = 0; col < NUM_COLS; col++)
    	    a[row][col] = 0;

==

int * p;
...
for (p = &a[0][0]; p <= &a[NUM_ROWS-1][NUM_COLS-1]; p++)
    *p = 0;


```

#### 处理多维数组的行
为了访问到第i行的元素，需要初始化p使其指向数组a中第i行元素0
```c
p = &a[i][0];

//对于任意的二维数组a来说，由于表达式a[i]是指向第i行中的第一个元素（元素0）的指针，所以
上面语句可简化为

p = &a[i];
```

为了了解原理，回顾一一下，把数组取下标和指针算术运算关联起来的那个神奇的公式：

对于任意数组a来说，表达式a[i]等价于*(a+i)。

因此，&a[i][0]等同于&(*(a[i] + 0)),而后者等价于&*a[i];

又因为&和*运算符可以抵消，也就等同于a[i]。

```c
int a[NUM_ROWS][NUM_COLS], *p, i;
...
for (p = a[i]; p < a[i] + NUM_COLS; p++)
    *p = 0;
```

找到二维数组a中第i行的最大元素
```c
largest = find_largest(a[i], NUM_COLS);
```

#### 处理多维数组的列
对数组a的第i列清零

```c
int a[NUM_ROWS][NUM_COLS], (*p)[NUM_COLS], i;
...
for (p = &a[0]; p < &a[NUM_ROWS]; p++)
    (*p)[i] = 0;
```
这里把p声明为指向长度为NUM_COLS的整型数组的指针。
...