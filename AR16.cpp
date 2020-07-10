#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	cin.ignore(2, '\n');//忽略第一行(到\n為止)
	for (int i = 0; i < test_case; ++i)
	{
		vector<int> vec;
		string str;
		int a;
		getline(cin, str);//讀入一行
		istringstream sin(str);//將str複製到sin
		while (sin >> a)
			vec.push_back(a);//加到vec裡
		int l = vec.size(), max = 0, min = l+1;
		for (int j = 0; j < (l-1); ++j)
		{
			for (int k = (j+1); k < l; ++k)
			{
				int temp_max = abs(vec[j]-vec[k]), temp_min = abs(j-k);//計算ai-aj跟i-j的值
				if (temp_max > max)//如果ai-aj值比較大(相差比較遠)就存進去max
				{
					max = temp_max;
					min = temp_min;
				}
				else if (temp_max == max)//ai-aj一樣大就比兩個數字的距離i-j找比較小的
				{
					if (temp_min < min)
						min = temp_min;
				}
			}
		}
		cout << max << " " << min << endl;
	}
	return 0;
}
