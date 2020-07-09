#include <iostream>
#include <stdlib.h>
#include<string>
using namespace std;
int main(){
  int num, j=0, cnt=0;
  cin >> num;
  int n[10000] = {};
  for (int i = 0; i < num;i++){
    cin >> n[i];
  }
  if(n[0]<=5)
    cnt += n[0] * 36;
  else
    cnt += (10-n[0])*36;
  while(j<num-1){
    if(abs(n[j + 1] - n[j]) <= 5)
      cnt += abs(n[j + 1] - n[j])*36;
    else
      cnt += (10 - (abs(n[j + 1] - n[j])))*36;
    j++;
  }
  cout << "Minimal summation of swinging degrees is " << cnt << endl;
}