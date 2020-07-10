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
    sort(enemy.begin(), enemy.end());//排序
    sort(soldier.begin(), soldier.end());//排序

    for (int i = 0, j = 0; i < soldier.size(); i++, j++){
      if(soldier[i] > enemy[j]){//士兵打得贏敵人
        cnt++;
        soldier.erase(soldier.begin());//兩個抵銷
        enemy.erase(enemy.begin());
        i--;
        j--;
      }
      else{
        soldier.erase(soldier.begin());//打不贏就往後找下一個士兵來
        i--;
        j--;
      }
    }
    if(num!=0)
      cout << cnt << endl;
  }
  return 0;
}
