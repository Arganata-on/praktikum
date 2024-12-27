#include <iostream>
using namespace std;

int main()
{
    int array[][4] = {{1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4}};

    int baris = sizeof(array) / sizeof(array)[0];
    int kolom = sizeof(array)[0] / sizeof(array)[0][0];

    cout << "===============================\n";
    cout << "Menghitung jumlah panjang array\n";
    cout << "===============================\n";
    cout << "Jumlah baris: " << baris << '\n';
    cout << "Jumlah kolom: " << kolom << '\n';
    cout << "===============================";

    return 0;
}