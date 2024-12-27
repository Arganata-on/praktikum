#include <iostream>
using namespace std;

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