#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".65001"); //подключаем русский язык.
    int s = 0;                   //сумма нечётных чисел, начальное значение 0
    for (int i = 1; i < 200; i += 2) //i это нечётные числа до 200
    {
        s += i;                  //добавляем очередное число к сумме
    }
    cout << "Сумма целых положительных нечётных чисел, меньших 200: " << s << endl;
    return 0;
}
