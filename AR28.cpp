#include <iostream>
using namespace std;

int main()
{
    int n, num = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)
    {
        for (int j = (i+1); j < n ; ++j)
        {
            if (arr[i] > (2*arr[j]))
                ++num;
        }
    }
    cout << num << endl;
    delete[] arr;
    return 0;
}