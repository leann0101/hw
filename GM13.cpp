#include <iostream>
#include <fstream>
using namespace std;

struct XY
{
    int x;
    int y;
};
int main()
{
    int test_case, point, num;
    cin >> test_case;
    for (int i = 0; i < test_case; ++i)
    {
        cin >> point;
        XY* arr = new XY[point];
        for (int j = 0; j < point; ++j)
            cin >> arr[j].x >> arr[j].y;
        num = 0;
        for (int j = 0; j < point; ++j)
        {
            
            bool maxima = true;//測試是不是 maxima
            for (int k = 0; k < point; ++k)
            {
                if ((arr[k].x > arr[j].x) && (arr[k].y > arr[j].y))//別的數字的xy比較大
                {
                    maxima = false;//不是
                    break;
                }
            }
            if (maxima)//是的話num加一
                ++num;
        }
        cout << num << endl;
        delete[] arr;
    }
    return 0;
}
