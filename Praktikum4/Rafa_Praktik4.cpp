#include <iostream>
using namespace std;

void pembatas() {
    for (int i = 0; i < 150; i++) {
        cout << "=" ;
    }
}//Loop funct dan pembatas disini saya gunakan untuk memberi garis batas pada output yang dihasilkan oleh code nanti dan juga sebagai dekorasi agar rapih.

int main()
{
    int program; //digunakan sabegai var untuk switch-case untuk menentukan loopingan pada akhir program

    bool validasi = true;
    do
    {
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

        pembatas();
        cout << endl;

    switch (program){
    case 1:{
        int batas, sum;
        
            cout << "Masukan Batas (Hanya Bisa Bilangan Positif) : ";
            cin >> batas; //Input disini untuk memberikan batas pada jumlah deret yang mau ditampilkan.

            pembatas();
                cout << "\nDeret Bilangan Ganjil : ";
                for(int ganjil=1; ganjil <= batas; ganjil++){
                if (ganjil%2!=0)
                cout << ganjil << " ";
                } 
                
                sum = 0;
                for (int ganjil=1; ganjil <= batas; ganjil++) {
                    if (ganjil%2!=0){
                    sum += ganjil;}
                } cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Ganjil : " << sum;
                cout << "\nFaktor bilangan dari " << sum << " adalah 		   : ";
                    for (int ganjil = sum; ganjil > 0; --ganjil){
                    if (sum % ganjil == 0){
                        cout << ganjil << " ";
                    }
                } cout << endl;
                
                pembatas();
                cout << "\nDeret Bilangan Genap : ";
                for(int genap=1;genap<=batas;genap++) {if (genap%2==0) cout<<genap<<" ";} 
                
                sum = 0;
                for (int genap=1; genap <= batas; genap++) {if (genap%2==0){sum += genap;}} 
                    cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Genap : " << sum;
                    cout << "\nFaktor bilangan dari " << sum << " adalah 		  : ";
                    for (int genap = sum; genap > 0; --genap){
                        if (sum % genap == 0){
                            cout << genap << " ";}
                        } cout << endl;

                pembatas();
                cout << "\nDeret bilangan prima : ";
                for(int prima=1;prima<=batas;prima++){
                int bil=0;
                for(int j=1;j<=prima;j++){
                if(prima%j==0){
                    bil++;
                    }
                } if (bil==2)
                cout << prima << " ";
                }

                sum = 0;
                for (int prima=1; prima <= batas; prima++) {
                    int bil=0;
                    for(int j=1;j<=prima;j++){
                        if(prima%j==0){
                        bil++;
                        }
                    } if (bil==2){ 
                        sum += prima;
                        }
                } 
                cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Prima : " << sum;
                cout << "\nFaktor bilangan dari " << sum << " adalah 		  : ";
                    for (int prima = sum; prima > 0; --prima){
                    if (sum % prima == 0){
                        cout << prima << " ";
                    }
                }
            cout  << endl;     
            pembatas();
            break;
        }

    case 2:
        {
            int tinggi;
            char star = '*';

            cout << "Masukkan tinggi Segitiga : ";
            cin >> tinggi;

                for (int i = 1; i <= tinggi; i++) {
                    for (int j = 1; j <= tinggi - i; j++) {
                        cout << " ";
                    }
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        cout << "*";
                        star++;
                    } cout << endl;
                }
            break;
        }

    case 3:
        {
            int n, a = 0, b = 1, c;// deklarasi variabel yang ada pada program fibonacci

            // Input jumlah bilangan yang ingin ditampilkan
            cout << "Masukkan Batas Deret Bilangan Fibonacci yang Ingin ditampilkan : ";
            cin >> n;

            if (n <= 0)
            {cout << "Jumlah bilangan harus positif." << endl;} // Untuk mengecek nilai yang diinput harus 0 atau lebih dari 0

            cout << "Deret Fibonacci : ";
            for (int i = 1; i <= n; i++)
            {
                cout << a << " ";
                c = a + b;
                a = b;
                b = c;
            }cout << endl; // Code Untuk mencentak Deret Fibonacci
            break;
        }

    case 4:
        {
            cout << "Dadahhh, kamu Telah Keluar Dari Program Ini....\n" ;
            pembatas();
            validasi = false;
            break;
        }// case 4 digunakan untuk keluar dari program atau loopingan program while karena dicase 4 validasinya akan dirubah jadi false, lalu while akan berhenti me looping karena kondisinya tidak terpenuhi.

        default:
            break;
        }
    } while (validasi);//untuk me looping code setelah progra selesai dijalankan, kecuali case 4 atau program pilihan 4
}