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
    a[ans] = ans;
  } 
  for (int i = 1; i <= num;i++){
    if(a[i] == 0)
      cout << i << endl;
  }
}  