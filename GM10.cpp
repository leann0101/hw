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
      cout << "Both" << endl;
    else if(x1 * x2 > 0 && y1 * y2 > 0)
      cout << "None" << endl;
    else if(x1 * x2 < 0 && y1 * y2 > 0)
      cout << "Y" << endl;
    else if(x1 * x2 > 0 && y1 * y2 < 0)
      cout << "X" << endl;
  }
  return 0;
}