#include <iostream>
#include <string>

using namespace std;

int countVocal(string inputText, char targetChar) // fungsi untuk mencari jumlah huruf vokal (sequential search)
{
    int count = 0;
    for (int i = 0; i < inputText.length(); i++) // Sequential search dilakukan dengan iterasi melalui setiap karakter dalam string
    {
        if (inputText[i] == targetChar) // Memeriksa apakah karakter pada indeks saat ini sama dengan huruf yang dicari
        {
            count++; // Jika ditemukan huruf yang sesuai, jumlahnya ditambah
        }
    }
    return count; // Mengembalikan jumlah huruf yang ditemukan
}

void displayVocalCount(string inputText) // fungsi untuk menampilkan jumlah huruf vokal
{
    int count;
    char vocalCharacters[10] = {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
    for (int i = 0; i < 10; i++)
    {
        count = countVocal(inputText, vocalCharacters[i]);
        cout << "Jumlah huruf " << vocalCharacters[i] << " : " << count << endl;
    }
}

int main() // fungsi utama
{
    cout << "========== Menghitung Jumlah Huruf Vokal ==========" << endl;
    string inputText;
    cout << "Masukkan kata : ";
    cin >> inputText;
    displayVocalCount(inputText);
    return 0;
}