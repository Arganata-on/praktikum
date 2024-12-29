#include <iostream>
using namespace std;

void perkalian(int baris, int kolom, int hasil[][3], int matriks1[][3], int matriks2[][3]);
void hasilPerkalian(int baris, int kolom, int hasil[][3]);

int main()
{
    int matriks1[][3] = {{1, 1, 1},
                         {1, 1, 1},
                         {1, 1, 1}};

    int matriks2[][3] = {{5, 5, 5},
                         {5, 5, 5},
                         {5, 5, 5}};

    const int baris = sizeof(matriks1) / sizeof(matriks1)[0];
    const int kolom = sizeof(matriks1)[0] / sizeof(matriks1)[0][0];

    cout << "==============================\n";
    cout << "Hasil Perkalian Matriks\n";
    cout << "==============================\n";

    int hasil[baris][kolom] = {0};

    perkalian(baris, kolom, hasil, matriks1, matriks2);
    hasilPerkalian(baris, kolom, hasil);

    cout << "==============================";

    return 0;
}
void perkalian(int baris, int kolom, int hasil[][3], int matriks1[][3], int matriks2[][3])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            for (int k = 0; k < kolom; k++)
            {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}
void hasilPerkalian(int baris, int kolom, int hasil[][3])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "| " << hasil[i][j] << " ";
        }
        cout << "|\n";
    }
}