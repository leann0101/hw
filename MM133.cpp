#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(){
  long double cnt = 0;
  int n;
  cin >> n;
  if(n%2==0){//偶數的話
    for (long double i = 2; i <= n;i=i+2){
      cnt += 1 / i;//算1/2 1/4...
    }
  }
  else {//奇數的話
    for (long double i = 1; i <= n;i=i+2){
      cnt += 1 / i;//算1/1 1/3...
    }
  }
  cout << fixed  <<  setprecision(11) << cnt << endl;//精準度至小數點下11位
  return 0;
}
