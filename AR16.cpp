#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	cin.ignore(2, '\n');
	for (int i = 0; i < test_case; ++i)
	{
		vector<int> vec;
		string str;
		int a;
		getline(cin, str);
		istringstream sin(str);
		while (sin >> a)
			vec.push_back(a);
		int l = vec.size(), max = 0, min = l+1;
		for (int j = 0; j < (l-1); ++j)
		{
			for (int k = (j+1); k < l; ++k)
			{
				int temp_max = abs(vec[j]-vec[k]), temp_min = abs(j-k);
				if (temp_max > max)
				{
					max = temp_max;
					min = temp_min;
				}
				else if (temp_max == max)
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