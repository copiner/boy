
int
find_largest(int a[], int n)
{
  int i, max;

  max = a[0];
  for (i = 1; i < n; i++)
    if(a[i] > max){
      max = a[i];
    }
  return max;
}

largest = find_largest(b, N);
//这个调用会把指向数组b第一个元素的指针赋值给啊，数组本身没有被复制。


//对形式参数而言，声明a是指针就相当于声明它是数组。编译器把这两类声明看作完全一样的

int
find_largest(int *a, int n)
{
  ...
}

//求数组b中某一部分的最大元素
largest = find_largest(&b[5], 10);//b[5],...,b[14]
