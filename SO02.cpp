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
    if(input.compare("-a")==0 || input.compare("-d")==0)
      break;
    in = atoi(input.c_str());
    q.push_back(in);
  }
  if(input.compare("-a")==0)
    sort(q.begin(), q.end());
  else
    sort(q.rbegin(), q.rend());
  int len = q.size();
  cout << "Array =";
  for (int i = 0; i < len;i++)
    cout << " " << q[i];
  cout << endl;

  while(cin >> devide){
    cout << "N = " << devide << ", Array =";
    devide = len / devide;
    for (int i = 0; i < devide;i++)
      cout << " " << q[i];
    cout << endl;
  }
  return 0;
}