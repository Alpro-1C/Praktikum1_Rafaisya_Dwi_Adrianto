#include <iostream>
#include "..\function\function.cpp" // include ini digunakan untuk memanggil code function yang terpisah. 
using namespace std;                // kenapa saya pisahkan karena agar kode main nya kelihatan lebih rapih.

int main()
{
    int program; //digunakan sabegai var untuk switch-case untuk menentukan loopingan pada akhir program

    bool validasi = true;
    do
    {  
        cout << endl;
        pembatas();
        cout << "\n";

        cout << "List Program Yang Ingin Digunakan : " << "\n";
        cout << "1. Program Menampilkan Deret Bilangan (Ganjil, genap, Prima), Jumlah, Dan Faktornya." << "\n";
        cout << "2. Program Pola Segitiga  Bintang." << "\n";
        cout << "3. Program Untuk Menampilkan Deret Fibonacci." << "\n";
        cout << "4. Exit" << "\n";

        pembatas();
        cout << "\n";

        cout << "Masukkan pilihan: ";
        cin >> program;
        system("cls");//system clearscreen, code untuk membersihkan terminal setelah terminal tersebut tidak dipakai lagi 

        cout << "\t\t\t\t\t\t===============[ ALERT ]==============="; //code disini akan kegenerate saat program yang dipilih tidak ada.
        cout << "\n\t\t\t\t\t\t| Program Yang Kamu Pilih Tidak Ada ! |\n";

        pembatas();
        cout << endl;

    switch (program){
    case 1:{
        system("cls");
        pembatas();
        cout << "\nMasukan angka Yang Ingin Diinput Ke Deret Bilangan :";
            cin >> batas;

        pembatas();
            cout << "\nNilai Yang Dimasukan Adalah " << batas << endl;

        deretBilangan(batas); // ini adalah contoh jenis function dengan parameter, yaitu parameternya batas
        cout << endl;
            break;
        }

    case 2:
        {
        system("cls");
        segitigaPyramid();
            break;
        }

    case 3:
        {
        system("cls");
        int n, i, j = 0;

            pembatas();
            cout << "\nMasukkan batas jumlah bilangan fibonacci: ";
            cin >> n;

            pembatas();
            cout << "\nHasil bilangan fibonacci: \n";
            for (i = 1; i <= n; i++){
                cout << fibonacci(j) << " ";//Ini adalah contoh penggunaan jenis function rekursif, karena function itu sendiri dipanggil didalam functionnya (bisa dilihat difolder function.cpp)
                j++;
            }
            cout << endl;
            pembatas();
            break;
        }

    case 4:
        {
        char cek;//char cek disini digunakan untuk membuat switch case untuk kkonfirmasi keluar dari program
        system("cls");
        pembatas();
            cout << "\n\t\t\t\t\t\t\tYakin Ingin Keluar dari Program Ini ?\n" << "\n\t\t\t\t\t\t\t==========[ (y) / (n) ]==========\n";
            pembatas();
            cout << "\nKonfirmasi disini ==> ";
            cin >> cek;
            switch (cek){
                case 'y': {//jadi misalkan si user benar benar ingin keluar dari programnya, dia akan diminta untuk konformasi dengan mengetikan [y]
                    validasi = false;//lalu jika [y] maka validasi untuk do whilenya akan bernilai false dan dia akan keluar dari program.
                    system("cls");
                    pembatas();
                    cout << "\nDadahhh, kamu Telah Keluar Dari Program Ini....\n";
                    pembatas();
                    break;
                }
                case 'n': {//jika dia [no/n] maka validasinya akan tetap true, dan program do while akan mengulang lagi dari pemilihan program.
                    system("cls");
                    pembatas();
                    cout << "\nAda Yang Bisa Kami Bantu ?\n";
                } 
                pembatas();
                cout << endl << endl;
            }
        }
        default:
        break;
        }
    }while (validasi);//untuk me looping atau stop code setelah program dijalankan, dia akan stop apabila user menginputkan [yes/y] pada case 4,
}                     // dan akan terus looping apabila nilainya true
