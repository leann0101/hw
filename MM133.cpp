#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(){
  long double cnt = 0;
  int n;
  cin >> n;
  if(n%2==0){
    for (long double i = 2; i <= n;i=i+2){
      cnt += 1 / i;
    }
  }
  else {
    for (long double i = 1; i <= n;i=i+2){
      cnt += 1 / i;
    }
  }
  cout << fixed  <<  setprecision(11) << cnt << endl;
  return 0;
}