#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int arr[8] = {x1, y1, x2, y2, x3, y3, x4, y4};
    for (int i = 0; i < 8; ++i)
    {
        if ((abs(arr[i]) > 1000))
        {
            cout << "invalid"<<endl;
            return 0;
        }
    }
    double a, b, c, d, dia;
    a = pow(x1-x2, 2)+pow(y1-y2, 2);
    b = pow(x2-x3, 2)+pow(y2-y3, 2);
    c = pow(x3-x4, 2)+pow(y3-y4, 2);
    d = pow(x4-x1, 2)+pow(y4-y1, 2);
    dia = pow(x1-x3, 2)+pow(y1-y3, 2);
    if ((a == b) && (b == c) && (c == d))
    {
        if ((a+b) == dia)
            cout << "square"<<endl;
        else cout << "diamond"<<endl;
    }
    else if ((a == c) && (b == d))
    {
        if ((a+b) == dia)
            cout << "rectangle"<<endl;
        else cout << "parallelogram"<<endl;
    }
    else cout << "others"<<endl;
    return 0;
}