#include <iostream>
#include <math.h>
#include<string>
using namespace std;
void swap(int &a, int &b){
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
    if(a[i]>a[0])
      swap(a[i], a[0]);
  }
  cout << "Largest number = " << a[0] << endl;
  for (int i = 1; i < 10; i++){
    if(a[i]<a[0])
      swap(a[i], a[0]);
  }
  cout << "Smallest number = " << a[0] << endl;
  return 0;
}