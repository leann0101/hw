#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  vector<int> a;
  int n;
  float k;
  while(cin >> n){
    a.push_back(n);
  }
  sort(a.begin(), a.end());//排序
  k = a.size();
  if(a.size()%2==0)//是偶數個的話
    cout << a[k / 2 - 1] << endl;//輸出中間偏前面那個數
  else
    cout << a[k / 2 - 0.5] << endl;//輸出正中間那個數
  return 0;
}
