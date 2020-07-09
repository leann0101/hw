#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int f(int n){
  if( n==0 or n==1 )
    return n;
  if( n >= 2 )
    return f(n-1)+f(n-2);
}
int main(){
  int n,all;
  cin >> all;
  for(int i =0;i<all;i++){
    cin >> n;
    // if(n>=2 && n<=1000)
      cout << f(n) << endl;
  }
  return 0;
}