#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".65001"); //подключение русского языка
    int n = 10;
    double eps = 0.0001;
    double x, h = 0.09;          //h - шаг изменения x
    cout << "Вычисление функции" << endl;

    for (x = 0.1; x <= 1.0001; x = x + h)
    {
        //сумма для заданного n
        double a = x;            //первый член ряда
        double SN = x;
        for (int i = 1; i <= n; i++)
        {
            a = -a * x * x / ((2 * i) * (2 * i + 1));
            SN = SN + a;
        }

        //сумма для заданной точности
        a = x;
        double SE = 0;
        int i = 0;
        while (a >= eps || a <= -eps)
        {
            SE = SE + a;
            i++;
            a = -a * x * x / ((2 * i) * (2 * i + 1));
        }

        double Y = sin(x);       //точное значение
        cout << "X=" << x << " SN=" << SN << " SE=" << SE << " Y=" << Y << endl;
    }
    return 0;
}
