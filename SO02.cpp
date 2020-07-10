#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
  vector<int> q;
  int devide;
  int in;
  string input;
  while(cin >> input){
    if(input.compare("-a")==0 || input.compare("-d")==0)//-a -d代表讀完了
      break;
    in = atoi(input.c_str());//string轉數字
    q.push_back(in);
  }
  if(input.compare("-a")==0)//-a的話排小到大
    sort(q.begin(), q.end());
  else
    sort(q.rbegin(), q.rend());//-d的話排大到小
  int len = q.size();
  cout << "Array =";
  for (int i = 0; i < len;i++)
    cout << " " << q[i];//輸出數字
  cout << endl;

  while(cin >> devide){//讀入要多少個
    cout << "N = " << devide << ", Array =";
    devide = len / devide;//除完找出要幾個
    for (int i = 0; i < devide;i++)
      cout << " " << q[i];
    cout << endl;
  }
  return 0;
}
