#include <iostream>
using namespace std;

int main()
{
    int matriks1[][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    int matriks2[][3] = {{9, 8, 7},
                         {6, 5, 4},
                         {3, 2, 1}};

    const int baris = sizeof(matriks1) / sizeof(matriks1)[0];
    const int kolom = sizeof(matriks1)[0] / sizeof(matriks1)[0][0];

    cout << "==============================\n";
    cout << "Hasil Penjumlahan Matriks\n";
    cout << "==============================\n";

    int hasil[baris][kolom];

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "| " << hasil[i][j] << " ";
        }
        cout << "|\n";
    }

    cout << "==============================";

    return 0;
}