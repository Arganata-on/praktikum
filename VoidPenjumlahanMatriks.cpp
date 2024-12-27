#include <iostream>
using namespace std;

void penjumlahan(int baris, int kolom, int hasil[][3], int matriks1[][3], int matriks2[][3]);
void hasilPenjumlahan(int baris, int kolom, int hasil[][3]);

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

    penjumlahan(baris, kolom, hasil, matriks1, matriks2);
    hasilPenjumlahan(baris, kolom, hasil);

    return 0;
}

void penjumlahan(int baris, int kolom, int hasil[][3], int matriks1[][3], int matriks2[][3])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void hasilPenjumlahan(int baris, int kolom, int hasil[][3])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "| " << hasil[i][j] << " ";
        }
        cout << "|\n";
    }

    cout << "==============================";
}