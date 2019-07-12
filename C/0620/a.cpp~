#include <iostream>
using namespace std;
int main(){
  int a[100],b[100],c[100],len,la,lb,i,j;
  long long n,m;
  cin>>n>>m;

  la=0;
  while(n>0){
    la++;
    a[la]=n%10;
    n=n/10;
  }
  lb=0;
  while(m>0){
    lb++;
    b[lb]=m%10;
    m=m/10;
  }

  memset(c,0,sizeof(c));
  for(i=1;i<=la;i++){
    for(j=1;j<=lb;j++){
      c[i+j-1]=c[i+j-1]+a[i]*b[j];
    }
  }

  len=la+lb;
  for(i=1;i<=len;i++){
    c[i+1]=c[i+1]+c[i]/10;
    c[i]=c[i]%10;
  }
  while(c[len]==0){
    len--;
  }
  m=c[len];
  while(m>0){
    c[len]=m%10;
    m=m/10;
    len++;
  }
  for(i=len-1;i>=1;i--) {
    cout<<c[i];
  }
  cout<<endl;
  return 0;
}
