#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

int kurang(int a, int b)
{
    int hasil = a - b;
    return hasil;
}

int jml(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

float avg(int arr[], int n)
{
    int total = jml(arr, n);
    float rata = (float)total / n;
    return rata;
}

int main()
{

    int a, b;
    cout << "Masukan bilangan pertama : ";
    cin >> a;
    cout << "Masukan bilangan kedua: ";
    cin >> b;

    int hasil_tambah = tambah(a, b);
    int hasil_kurang = kurang(a, b);

    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai array ke-" << i << ": ";
        cin >> arr[i];
    }
    int total = jml(arr, n);
    float rata = avg(arr, n);

    cout << "Hasil penjumlahan: " << hasil_tambah << endl;
    cout << "Hasil pengurangan: " << hasil_kurang << endl;
    cout << "Total dari array: " << total << endl;
    cout << "Rata-rata dari array: " << rata << endl;

    return 0;
}
