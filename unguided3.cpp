#include <iostream>

using namespace std;

int sequentialSearch(int inputArray[], int arraySize, int targetNumber) // Fungsi untuk mencari jumlah kemunculan suatu angka dalam array
{
    int count = 0;
    for (int i = 0; i < arraySize; ++i)
    {
        if (inputArray[i] == targetNumber)
        {
            count++;
        }
    }
    return count;
}

int main() // fungsi utama
{
    cout << "========== Searching Data Angka 4 ==========" << endl;
    int inputArray[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}; // Data yang akan dicari
    int arraySize = sizeof(inputArray) / sizeof(inputArray[0]); // Menghitung jumlah elemen dalam array
    int targetNumber = 4; // Angka yang dicari
    int count = sequentialSearch(inputArray, arraySize, targetNumber); // Memanggil fungsi sequentialSearch
    cout << "Jumlah angka 4: " << count << endl;
    return 0;
}