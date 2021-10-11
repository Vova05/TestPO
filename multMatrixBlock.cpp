//
// Created by VovaGlh on 11.10.2021.
//
#include "iostream"

using namespace std;
int row1, row2, col1, col2;
double** a, ** b, ** c;

void inputMatrix(){
    cout<<"Hello!!!\n This program multiplies and sums the entered matrices.\nStart work.\n";
    cout << "\nEnter the number of rows of the first matrix: ";
    //cin >> row1;
    cout << "\nEnter the number of columns of the first matrix: ";
    //cin >> col1;
    cout << "\nEnter the number of rows of the second matrix: ";
    //cin >> row2;
    cout << "\nEnter the number of columns of the second matrix: ";
   // cin >> col2;
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
}
void testInput(int row_t1,int row_t2,int col_t1,int col_t2){
    row1=row_t1;
    col1=col_t1;
    row2=row_t2;
    col2=col_t2;
    // Ввод элементов первой матрицы
    a = new double* [row1];
    cout << "\nEnter the elements of the first matrix" << endl;
    for (int i = 0; i < row1; i++)
    {
        a[i] = new double[col1];
        for (int j = 0; j < col1; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            a[i][j]=3;
        }
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
            b[i][j]=3;
        }
    }
}

int multMatrixSqBad(){
    if (col1 != row2)
    {
        cout << "\nMultiplication is impossible!";
        cin.get(); cin.get();
        return 0;
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
int sumMatrix() {
    if (col1 != col2 || row1 != row2) {
        cout << "\nSum is impossible!";
        return 0;
    }
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // Вывод результата суммирования
    cout << endl << "\nSum of two matrix is: " << endl;
        for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cout << c[i][j] << " ";
            if (j == col1 - 1)
                cout << endl;
            }
        }
    return 0;
}
int Test1(){
    testInput(2,1,3,2);
    if(multMatrixSqBad()==0){
        return 0;
    }else{
        return 1;
    }
}
int Test2(){
    testInput(3,4,4,4);
    if(sumMatrix()==0){
        return 0;
    }else{
        return 1;
    }
}
