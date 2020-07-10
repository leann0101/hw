#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int f(int n){
  if( n==0 or n==1 )//0或1就回傳他自己
    return n;
  if( n >= 2 )//不然就呼叫自己(f)算f(n-1)+f(n-2)，直到是0或1
    return f(n-1)+f(n-2);
}
int main(){
  int n,all;
  cin >> all;
  for(int i =0;i<all;i++){
    cin >> n;
      cout << f(n) << endl;
  }
  return 0;
}
