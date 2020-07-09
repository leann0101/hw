#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  cout << n*(n - 1)*(n - 2)*(n - 3) / 24 << endl;
  return 0;
}