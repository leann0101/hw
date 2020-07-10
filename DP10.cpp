#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int f(int n){
  if( n==1 or n==2 )//n是一或二就回傳1
    return 1;
  if( n >= 3 )//不然就呼叫自己(f)回傳f(n-1)加上f(n-2)，直到n剩下1或2
    return f(n-1)+f(n-2);
}
int main(){
  int n,all;
  cin >> all;
  for(int i =0;i<all;i++){
    cin >> n;
    if(n>=1 && n<=45)//輸入資料範圍是1-45
      cout << f(n) << endl;
  }
  return 0;
}
