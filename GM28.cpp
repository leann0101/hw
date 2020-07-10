#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  cout << n*(n - 1)*(n - 2)*(n - 3) / 24 << endl;//計算n承上(n - 1)呈上(n - 2)呈上(n - 3) 除以 24
  return 0;
}
