#include <iostream>
#include <math.h>
#include<string>
using namespace std;
void swap(int &a, int &b){//交換的程式
    int temp = a;
    a = b;
    b = temp;
}
int main(){
  int a[10];
  for (int i = 0; i < 10;i++){
    cin >> a[i];
  }
  for (int i = 1; i < 10; i++){
    if(a[i]>a[0])//比第一個數字的話
      swap(a[i], a[0]);//就放到第一個
  }
  cout << "Largest number = " << a[0] << endl;
  for (int i = 1; i < 10; i++){
    if(a[i]<a[0])//比第一個數字小的話
      swap(a[i], a[0]);//就放到第一個
  }
  cout << "Smallest number = " << a[0] << endl;
  return 0;
}
