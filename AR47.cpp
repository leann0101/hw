#include <iostream>
using namespace std;

int main() {
     long long int num;
     cin >> num;
     while (num%2 == 0)//可以被2整除
          num/=2;//除以2
     while (num%3 == 0)//可以被3整除
          num/=3;//除以3
     while (num%5 == 0)//可以被5整除
          num/=5;//除以5
     if (num == 1)//除完剩下等於一
          cout << "Regular number!"<<endl;
     else cout << "Irregular number!"<<endl;
     return 0;
}
