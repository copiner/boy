#include<iostream>
using namespace std;
int f(int n){
  int fibo;
  if(n == 1 || n == 2){
    fibo = 1;
  } else {
    fibo = f(n-1) + f(n-2);
  }
  return fibo
}

int main(){
  int n, fibon;

  cin >> n;
  fibon = f(n);
  cout <<"The "<<n<<" number of fiobnacci is "<<fibon<<endl;
}




















#include<iostream>
using namespace std;
int main(){
    int f1=1,f2=1,t,n=1;
    cout<<"first:"<<f1<<endl;
    cout<<"second:"<<f2<<endl;
    for(n=3;n<=20;n++){
        t=f2;
        f2=f1+f2;
        f1=t;
    cout<<"The n "<<n<<"pos "<<f2<<endl;
    }
    cout<<endl;
    return 0;
}


# include <iostream>
# include <cstdio>
using namespace std;
int main(){
    int a=0,b=1,c=1,n;
    cin>>n;
    for(int i=3;i<=n;i++){
        a=b;
        b=c;
        c=a+b;
    }
    //cout<<c;
    cout<<"The n "<<n<<"pos "<<c<<endl;
    return 0;
}
