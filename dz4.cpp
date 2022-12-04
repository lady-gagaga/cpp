#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    const int n = 3, m = 3;
    int arr[m][n];
  
    cout << "введите значения элементов массива:" << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Элемент массива [" << i << "][" << j << "]:" << endl;
            cin >> arr[i][j];
        }

    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "";
        }
        cout << endl;
    }
    cout << endl;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    sum /= n * m;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(sum - arr[a][b]) > abs(sum - arr[i][j]))
            {
                a = i;
                b = j;
            }
        }
    }

    cout << "номер строки:" << a + 1 << '\n';
    cout << "номер столбца:" << b + 1 << '\n';
    return 0;
}