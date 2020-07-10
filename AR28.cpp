#include <iostream>
using namespace std;

int main()
{
    int n, num = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)//從每個點
    {
        for (int j = (i+1); j < n ; ++j)//去跟其他點比比看
        {
            if (arr[i] > (2*arr[j]))//如果他比別人的兩倍還大
                ++num;//num就加一
        }
    }
    cout << num << endl;//找有幾個人比別人的兩倍大
    delete[] arr;
    return 0;
}
