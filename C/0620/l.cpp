//一．高精度数的存储

//１．如对数采用的字符串输入
#include <iostream>
#include <cstring>
using namespace std;
const int N=100;//最多100位
int main(){
  int a[N+1],i;
  string s1;
  cin>>s1;//数s1
  memset(a,0,sizeof(a)); //数组清0
  a[0]=s1.length(); //位数
  for(i=1;i<=a[0];i++) {
    a[i]=s1[a[0]-i]-'0';
  }//将字符转为数字并倒序存储．
  return 0;
}
//2.直接读入
#include <iostream>
using namespace std;
const int N=100;//最多100位
int main(){
  int a[N+1],i,s,key;
  cin>>key;//数key
  memset(a,0,sizeof(a)); //数组清0
  i=0;//第0位
  while(key){  //当key大于0
    a[++i]=key%10;//取第i位的数
    key=key/10;
  }
  a[0]=i; //共i位数
  return 0;
}
//3.直接初始化(用a[]存储)

// 初始化为0: memset(a,0,sizeof(a));
// 初始化为1: memset(a,0,sizeof(a));a[0]=1;a[1]=1;
//
// 以下程序都只写函数，不写完整程序，所有高精度数存储都满足上述约定。
// 二.高精度数比较
int compare(int a[],int b[]) {  //比较a和b的大小关系，若a>b则为1，a<b则为-1,a=b则为0
  int i;
  if (a[0]>b[0]) return 1;//a的位数大于b则a比b大
  if (a[0]<b[0]) return -1;//a的位数小于b则a比b小
  for(i=a[0];i>0;i--){  //从高位到低位比较
    if (a[i]>b[i]) return 1;
    if (a[i]<b[i]) return -1;
  }
  return 0;//各位都相等则两数相等。
}

//三、高精度加法
int plus(int a[],int b[]){ //计算a=a+b
  int i,k;
  k=a[0]>b[0]?a[0]:b[0]; //k是a和b中位数最大的一个的位数
  for(i=1;i<=k;i++){
    a[i+1] += (a[i]+b[i])/10;  //若有进位，则先进位
    a[i] = (a[i]+b[i])%10;
  }  //计算当前位数字,注意：这条语句与上一条不能交换。
  if(a[k+1]>0){
     a[0]=k+1;//修正新的a的位数（a+b最多只能的一个进位）
  } else {
    a[0]=k;
  }
  return 0;
}
//四、高精度减法
int gminus(int a[],int b[]){//计算a=a-b，返加符号位0:正数 1:负数
  int flag,i
  flag=compare(a,b); //调用比较函数判断大小
  if (falg==0){//相等
    memset(a,0,sizeof(a));return 0;
  }  //若a=b，则a=0,也可在return前加一句a[0]=1,表示是 1位数0
  if(flag==1){ //大于
    for(i=1;i<=a[0];i++){
      if(a[i]<b[i]){
        a[i+1]--;a[i]+=10;
      } //若不够减则向上借一位
      a[i]=a[i]-b[i];}
     while(a[a[0]]==0) a[0]--; //修正a的位数
    return 0;
  }
  if(flag==-1){//小于  则用a=b-a,返回-1
     for(i=1;i<=b[0];i++){
       if(b[i]<a[i]){
         b[i+1]--;b[i]+=10;
       } //若不够减则向上借一位
       a[i]=b[i]-a[i];
      }
      a[0]=b[0];
      while(a[a[0]]==0) a[0]--; //修正a的位数
      return -1;
  }
}

//五、高精度乘法1(高精度乘单精度数，单精度数是指通常的整型数)
int multi1(int a[],long  key){ //a=a*key,key是单精度数
  int i,k;
  if(key==0){
    memset(a,0,sizeof(a));
    a[0]=1;
    return 0;
  } //单独处理key=0
  for(i=1;i<=a[0];i++){
    a[i]=a[i]*key;
  }//先每位乘起来
  for(i=1;i<=a[0];i++){
    a[i+1]+=a[i]/10;
    a[i]%=10;
  } //进位
  //注意上一语句退出时i=a[0]+1
  while(a[i]>0) {
    a[i+1]=a[i]/10;
    a[i]=a[i]%10;
    i++;
    a[0]++;
  } //继续处理超过原a[0]位数的进位,修正a的位数
  return 0;
}
