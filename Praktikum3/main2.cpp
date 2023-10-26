#include <iostream> //Header
using namespace std;

int main (){
    int a, b, c;
    cout << "Masukan Nilai A : ";
    cin >> a;

    cout << "Masukan Nilai B : ";
    cin >> b;

    cout << "Masukan Nilai C : ";
    cin >> c;
    
    if (a>b && a>c){//Ket : Apabila nilai a lebih besar dari b dan juga kalau nilai a lebih besar dari c maka yang akan diprint adalah nilai (A)
        cout << "Nilai Terbesar Adalah Nilai A " << a;
    }
    else if (b>a && b>c){//Ket : Apabila nilai b lebih besar dari a dan juga kalau nilai b lebih besar dari c maka yang akan diprint adalah nilai (B)
        cout << "Nilai Terbesar Adalah Nilai B " << b;
    }
    else if (c>a && c>b){//Ket : Apabila nilai c lebih besar dari a dan juga kalau nilai c lebih besar dari b maka yang akan diprint adalah nilai (C)
        cout << "Nilai Terbesar Adalah Nilai C " << c;
    } else {//kondisi ini akan keluar apabila dari 3 kondisi diatas tidak ada yang terjadi (misal nilai diketiga variabelnya sama besar)
        cout << "Tidak Ada Nilai Terbesar !";
    }

    return 0;
}