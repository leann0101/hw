#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
  int x1, y1, x2, y2, num;
  cin >> num;
  for (int i = 0; i < num;i++){
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 * x2 < 0 && y1 * y2 < 0)
      cout << "Both" << endl;//x跟y座標都是一正一負代表跨過兩個軸
    else if(x1 * x2 > 0 && y1 * y2 > 0)
      cout << "None" << endl;//x跟y座標都是同象限代表沒跨過兩個軸
    else if(x1 * x2 < 0 && y1 * y2 > 0)
      cout << "Y" << endl;//x座標一正一負代表跨過Y軸
    else if(x1 * x2 > 0 && y1 * y2 < 0)
      cout << "X" << endl;//y座標一正一負代表跨過x軸
  }
  return 0;
}
