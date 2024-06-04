#include <iostream>
#include <conio.h>
#include <cstring>
#include <iomanip>

using namespace std;

char inputString[100]; 
char targetChar; 

void sortData(char arr[], int n)
{
    int temp, min, i, j;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void searchData(char arr[], int n)
{
    int start, end, mid;
    bool found = false;
    start = 0;
    end = n - 1;
    while (!found && start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == targetChar)
        {
            found = true;
        }
        else if (arr[mid] < targetChar)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (found)
    {
        cout << "\nData ditemukan pada index ke-" << mid << endl;
    }
    else
    {
        cout << "\nData tidak ditemukan" << endl;
    }
}

int main() 
{
    cout << "========== Searching Huruf ==========" << endl;

    cout << "Masukkan kalimat: ";
    cin.getline(inputString, 100); 

    int length = strlen(inputString);

    cout << "Masukkan karakter yang ingin dicari: ";
    cin >> targetChar;

    cout << "\nData diurutkan: ";
    sortData(inputString, length);

    for (int x = 0; x < length; x++)
    {
        cout << setw(3) << inputString[x];
    }
    cout << endl;

    searchData(inputString, length);  

    _getche(); 
    return 0;
}