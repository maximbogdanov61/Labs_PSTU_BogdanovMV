#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;
const int N = 10;                //максимальный размер матрицы

//заполнение матрицы случайными числами от 0 до 9
void fill(int A[N][N], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            A[i][j] = rand() % 10;
}

//печать матрицы
void print(int A[N][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
}

//суммирование матриц: C = A + B
void sum(int A[N][N], int B[N][N], int C[N][N], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}

int main(){
    setlocale(LC_ALL, ".65001"); //подключение русского языка
    srand(time(0));              //запуск датчика случайных чисел
    int A[N][N];                 //исходная матрица
    int T[N][N];                 //транспонированная матрица
    int C[N][N];                 //сумма матриц
    int n;                       //размер матрицы
    cout << "Введите размер матрицы (не больше 10): ";
    cin >> n;

    fill(A, n);
    cout << "Исходная матрица:" << endl;
    print(A, n);

    //транспонирование: строки матрицы A записываем в столбцы матрицы T
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            T[j][i] = A[i][j];
    cout << "Транспонированная матрица:" << endl;
    print(T, n);

    sum(A, T, C, n);
    cout << "Сумма матриц:" << endl;
    print(C, n);
    return 0;
}