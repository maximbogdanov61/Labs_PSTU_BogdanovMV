#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".65001"); //подключение кириллицы
    int n, m, r;
    cout << "Введите n и m: ";
    cin >> n >> m;                  //ввод значений с клавиатуры
    int n0 = n, m0 = m;             //запоминаем исходные значения

    r = n---m;                      //первое выражение
    cout << "n---m = " << r << " n=" << n << " m=" << m << endl;
    n = n0, m = m0;                 //возвращаем исходные значения
    r = m--<n;                      //второе выражение
    cout << "m--<n = " << r << " n=" << n << " m=" << m << endl;
    n = n0, m = m0;
    r = n++>m;                      //третье выражение
    cout << "n++>m = " << r << " n=" << n << " m=" << m << endl;
    return 0;
}
