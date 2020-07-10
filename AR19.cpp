#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int main(){
  int i, input, b, a, test;
  while(cin >> input){
    for (i = 100000; i >= 1; i--){
      b = pow(i, 2);//i平方，i就是B
      a = input / b;//原本的數除以i平方找出A
      test = sqrt(a);//A開根號
      if((a!=test*test||a==1) && input==a*b){//如果A是Square-free 或是1，A*i*i=輸入的數，就代表找到了
        break;
      }
    }
    cout << input << " = " << a << "*" << i << "^2" << endl;
  }
  return 0;
}
