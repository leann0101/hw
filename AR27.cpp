#include <iostream> 
#include <math.h> 
#include <string.h> 
using namespace std; 
 
int main(){ 
  int a[70001]={0}; 
  int num, ans; 
  cin >> num;
  for (int i = 1; i < num;i++){ 
    cin >> ans;
    a[ans] = ans;//陣列第幾個位子就存對應數字(a[1]存1)
  } 
  for (int i = 1; i <= num;i++){
    if(a[i] == 0)//看哪個位子沒有數字
      cout << i << endl;
  }
 return 0;
}  
