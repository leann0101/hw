#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int q,w,s,w2,s2,cnt=0;
  vector<int> weight;
  vector<int> student;
  cin >> q;
  for (int i = 0; i < q;i++){
    cin >> w >> s;
    for (int j = 0; j < w;j++){
      cin >> w2;
      weight.push_back(w2);
    }
    for (int j = 0; j < s;j++){
      cin >> s2;
      student.push_back(s2);
    }
    sort(weight.begin(), weight.end());//排序承重才能依序比較
    sort(student.begin(), student.end());//排序學生reward才能依序比較
    for (int k = 0; k < weight.size();k++){
      for (int h = 0; h < student.size();h++){
        if(weight[k] <= student[h]){//如果這個學生負荷的暸這個重量
          cnt += student[h];//有排到的就加到cnt，是老師得負的reward
          weight.erase(weight.begin()+k);//就互相抵消
          student.erase(student.begin()+h);
          k--;
          h--;
          break;
        }
      }
    }
    if (!weight.empty())//如果還有多的重量沒被扛
      cout << "-1" << endl;
    else
      cout << cnt << endl;//老師要付多少reward
    cnt = 0;
    vector<int>().swap(weight);
    vector<int>().swap(student);
  }
}
