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
  sort(a.begin(), a.end());
  k = a.size();
  if(a.size()%2==0)
    cout << a[k / 2 - 1] << endl;
  else
    cout << a[k / 2 - 0.5] << endl;
  return 0;
}