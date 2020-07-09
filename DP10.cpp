#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int f(int n){
  if( n==1 or n==2 )
    return 1;
  if( n >= 3 )
    return f(n-1)+f(n-2);
}
int main(){
  int n,all;
  cin >> all;
  for(int i =0;i<all;i++){
    cin >> n;
    if(n>=1 && n<=45)
      cout << f(n) << endl;
  }
  return 0;
}