#include <stdio.h>
#include <string.h>
char s[10000],ss[10000];
int a[10000],b[10000],c[10000];
int len，lenn;

/*-------------高精度乘法（高）--------------*/
void cheng_gao()     //高是指高精度乘高精度
{
	len = strlen(s);
	lenn = strlen(ss);
	memset(a,0,sizeof(a));   //清零数组
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	for (int i = 0 ; i < len ; i++){
    a[len - i - 1] = s[i] - '0';
  }//将字符串转化为数组
	for (int i = 0 ; i < lenn ; i++){
    b[lenn - i - 1] = ss[i] - '0';
  }

	memset(c,0,sizeof(c));   //清零
	for (int i = 0 ; i < lenA; i++){
    for (int j = 0 ; j < lenB ; j++){
      c[i + j] += a[i] * b[j];
    }
  }//运算（这个就有一点复杂了）

	int l = lenA + lenB - 1;    //l是结果的最高位数
	for (int i = 0 ; i < l ;i++){
		if(c[i] >=10){
			c[i + 1] += c[i] / 10;    //保证每一位的数都只有一位，并进位
			c[i] %= 10;
		}

	}

	while (c[l] > 0 ){
    l--;    //while去零法
  }

	printf("结果：\n");
	printf("%s × %s = ",s,ss);
	for (int i = l - 1; i >= 0 ; i--)    //输出结果
		printf("%d",c[i]);
	printf("\n");     //换行
}                               //高精度乘法（高）你懂了吗

void print()  //输出函数
{
	printf("高精度乘法（高）(By STY)\n\n");
    printf("退出请按“Ctrl+Z”(在键盘上)，并按回车，谢谢使用！\n");
    printf("请输入两个数字：\n");
    printf("数字：(用空格隔开)\n");
}

int main()
{
    print();
	while (scanf("%s%s",s,ss) != EOF)
	{
		printf("\n结果：\n");
        cheng_gao();    //引用高精度乘法函数
        printf("\n\n");
        print();
	}
	return 0;
}
