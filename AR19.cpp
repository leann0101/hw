#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int main(){
  int i, input, b, a, test;
  while(cin >> input){
    for (i = 100000; i >= 1; i--){
      b = pow(i, 2);
      a = input / b;
      test = sqrt(a);
      if((a!=test*test||a==1) && input==a*b){
        break;
      }
    }
    cout << input << " = " << a << "*" << i << "^2" << endl;
  }
  return 0;
}