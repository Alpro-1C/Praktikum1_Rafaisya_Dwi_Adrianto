#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variabel
    int n, a = 0, b = 1, c;

    // Input jumlah bilangan yang ingin ditampilkan
    cout << "Masukkan Deret bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    if (n <= 0)
    {cout << "Jumlah bilangan harus positif." << endl;} // Untuk mengecek nilai yang diinput harus 0 atau lebih dari 0

    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }cout << endl; // Code Untuk mencentak Deret Fibonacci

    return 0;
}
