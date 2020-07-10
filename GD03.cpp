#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int n,m,cnt=0;
  vector<int> pkt;
  cin >> n;
  for (int i = 0; i < n;i++){
    cin >> m;
    pkt.push_back(m);
  }
  sort(pkt.begin(), pkt.end());//排序pkt從小的開始送
  for (int k = 0; k < pkt.size();k++){
    cnt += pkt[k];//送過去要算
    for (int h = 0; h < k;h++){
      cnt += pkt[h] * 2;//下一個人還要等他送過去再回來的時間
    }
  }
  cout << cnt << endl;
  return 0;
}
