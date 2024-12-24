#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int rows, cols;

    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    srand(time(0));

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    
    cout << "Массив целых чисел:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int N;
    cout << "Введите номер столбца для сложения:";
    cin >> N;
    int sum = 0;
    for (int i = 0; i < rows; i++)
            sum += arr[i][N];
    cout << endl;
    
    cout << "Сумма " << N << " столбца=" << sum << endl;








    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
