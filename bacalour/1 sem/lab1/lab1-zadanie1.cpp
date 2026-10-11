#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".65001"); //подключаем кириллицу
    //решение с float
    float a1 = 1000;
    float b1 = 0.0001;
    float d1 = (a1 + b1) * (a1 + b1) * (a1 + b1);   //(a+b)^3
    float d2 = a1 * a1 * a1 + 3 * a1 * a1 * b1;     //a^3 + 3*a^2*b
    float d3 = d1 - d2;                             //числитель
    float d4 = 3 * a1 * b1 * b1 + b1 * b1 * b1;     //знаменатель
    float rezult1 = d3 / d4;                        //результат выражения
    cout << "Числитель с типом переменных float: " << d3 << endl;
    cout << "Знаменатель с типом переменных float: " << d4 << endl;
    cout << "Результат выражения с типом переменных float: " << rezult1 << endl;

    //решение с double
    double a2 = 1000;
    double b2 = 0.0001;
    double d1_2 = (a2 + b2) * (a2 + b2) * (a2 + b2);    //(a+b)^3
    double d2_2 = a2 * a2 * a2 + 3 * a2 * a2 * b2;      //a^3 + 3*a^2*b
    double d3_2 = d1_2 - d2_2;                          //числитель
    double d4_2 = 3 * a2 * b2 * b2 + b2 * b2 * b2;      //знаменатель
    double rezult2 = d3_2 / d4_2;                       //результат выражения
    cout << "Числитель с типом переменных double: " << d3_2 << endl;
    cout << "Знаменатель с типом переменных double: " << d4_2 << endl;
    cout << "Результат выражения с типом переменных double: " << rezult2 << endl;

    return 0;
}
