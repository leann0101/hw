#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  int num = 1, e ,s;
  while(num != 0){
    vector<int> enemy;
    vector<int> soldier;
    int cnt = 0;
    cin >> num;
    for (int i = 0; i < num;i++){
      cin >> e;
      enemy.push_back(e);
    }
    for (int i = 0; i < num;i++){
      cin >> s;
      soldier.push_back(s);
    }
    sort(enemy.begin(), enemy.end());
    sort(soldier.begin(), soldier.end());

    for (int i = 0, j = 0; i < soldier.size(); i++, j++){
      if(soldier[i] > enemy[j]){
        cnt++;
        soldier.erase(soldier.begin());
        enemy.erase(enemy.begin());
        i--;
        j--;
      }
      else{
        soldier.erase(soldier.begin());
        i--;
        j--;
      }
    }
    if(num!=0)
      cout << cnt << endl;
  }
  return 0;
}