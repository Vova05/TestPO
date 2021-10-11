//
// Created by VovaGlh on 11.10.2021.
//
#include "iostream"

using namespace std;
int row1, row2, col1, col2;
double** a, ** b, ** c;
void inputMatrix(){
    cout << "\nEnter the number of rows of the first matrix: ";
    cin >> row1;
    cout << "\nEnter the number of columns of the first matrix: ";
    cin >> col1;
    cout << "\nEnter the number of rows of the second matrix: ";
    cin >> row2;
    cout << "\nEnter the number of columns of the second matrix: ";
    cin >> col2;
}
int multMatrixSqBad(){
    if (col1 != row2)
    {
        cout << "\nMultiplication is impossible!";
        cin.get(); cin.get();
        return 0;
    }
    // Ввод элементов первой матрицы
    a = new double* [row1];
    cout << "\nEnter the elements of the first matrix" << endl;
    for (int i = 0; i < row1; i++)
    {
        a[i] = new double[col1];
        for (int j = 0; j < col1; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }
    // Вывод элементов первой матрицы
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    // Ввод элементов второй матрицы
    b = new double* [row2];
    cout << "\nEnter the elements of the second matrix" << endl;
    for (int i = 0; i < row2; i++)
    {
        b[i] = new double[col2];
        for (int j = 0; j < col2; j++)
        {
            cout << "b[" << i << "][" << j << "]= ";
            cin >> b[i][j];
        }
    }
    // Вывод элементов второй матрицы
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    // Умножение матриц
    c = new double* [row1];
    for (int i = 0; i < row1; i++)
    {
        c[i] = new double[col2];
        for (int j = 0; j < col2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < col1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    // Вывод матрицы произведения
    cout << "\nProduct matrix" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    cin.get(); cin.get();
    return 0;
}
