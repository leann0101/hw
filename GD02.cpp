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
    sort(weight.begin(), weight.end());
    sort(student.begin(), student.end());
    for (int k = 0; k < weight.size();k++){
      for (int h = 0; h < student.size();h++){
        if(weight[k] <= student[h]){
          cnt += student[h];
          weight.erase(weight.begin()+k);
          student.erase(student.begin()+h);
          k--;
          h--;
          break;
        }
      }
    }
    if (!weight.empty())
      cout << "-1" << endl;
    else
      cout << cnt << endl;
    cnt = 0;
    vector<int>().swap(weight);
    vector<int>().swap(student);
  }
}