
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
//������û��ָ������b��һ��Ԫ�ص�ָ�븳ֵ���������鱾��û�б����ơ�


//����ʽ�������ԣ�����a��ָ����൱�������������顣������������������������ȫһ����

int
find_largest(int *a, int n)
{
  ...
}

//������b��ĳһ���ֵ����Ԫ��
largest = find_largest(&b[5], 10);//b[5],...,b[14]
