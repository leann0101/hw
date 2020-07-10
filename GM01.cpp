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
            cout << "invalid"<<endl;//>1000 或 <-1000
            return 0;
        }
    }
    double a, b, c, d, dia;
    a = pow(x1-x2, 2)+pow(y1-y2, 2);//算距離的平方
    b = pow(x2-x3, 2)+pow(y2-y3, 2);
    c = pow(x3-x4, 2)+pow(y3-y4, 2);
    d = pow(x4-x1, 2)+pow(y4-y1, 2);
    dia = pow(x1-x3, 2)+pow(y1-y3, 2);//對角距離
    if ((a == b) && (b == c) && (c == d))//邊長相等
    {
        if ((a+b) == dia)//看a平方加b平方是不是對角線平方，來判別是不是直角
            cout << "square"<<endl;//是的話就是正方形
        else cout << "diamond"<<endl;
    }
    else if ((a == c) && (b == d))//對邊等長
    {
        if ((a+b) == dia)//看a平方加b平方是不是對角線平方，來判別是不是直角
            cout << "rectangle"<<endl;//是的話就是長方形
        else cout << "parallelogram"<<endl;
    }
    else cout << "others"<<endl;//都不符就是其他
    return 0;
}
