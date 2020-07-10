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
  if(n[0]<=5)//從右半邊開始
    cnt += n[0] * 36;//360度除以10，每格是36度，算往右邊跑幾格
  else
    cnt += (10-n[0])*36;//算往左邊跑幾格
  while(j<num-1){
    if(abs(n[j + 1] - n[j]) <= 5)//兩個相距在5格以內的話
      cnt += abs(n[j + 1] - n[j])*36;//直接相減
    else
      cnt += (10 - (abs(n[j + 1] - n[j])))*36;//不然就從另一個方向跑，用10去減
    j++;
  }
  cout << "Minimal summation of swinging degrees is " << cnt << endl;
}
