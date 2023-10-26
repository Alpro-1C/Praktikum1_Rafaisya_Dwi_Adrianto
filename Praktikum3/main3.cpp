#include <iostream> //Header
using namespace std;

void loopFunction(){ 
    for (int i = 1; i <= 100; i++) {
    cout << "-";
  }
}

int main() {

loopFunction();

int bangun;
cout << "\nIni Adalah Aritmatika Penghitung Luas Bangun Datar\n'''Keterangan : \n 1 = Luas Persegi \n 2 = Luas Persegi Panjang\n 3 = Luas Segitiga\n\nMasukkan Jenis Luas : ";
cin >> bangun;

loopFunction();

//Ini adalah Program Switch Case nya, Yang dimana didalamnya ada 3 Program Case
    switch (bangun) {
///Ini adalah luas persegi (1)
    case 1:
    float s, luas;
    cout << "\nMasukan Panjang Sisi               : ";
    cin >> s;

    cout << "\nPanjang Sisi Persegi Ini Adalah    : " << s << "\n";

    luas= 4*s;//rumus menghitung luas persegi

    loopFunction();
    cout << "\nLuas Dari Persegi Ini adalah : " << luas << endl;
    loopFunction();
    break;

///Ini adalah luas persegi panjang (2)
    case 2:
    float p, l;
    cout << "\nMasukan Panjang : ";
    cin >> p;
    cout << "Masukan Lebar   : ";
    cin >> l;

    cout << "\nPanjang Persegi Panjang Ini Adalah : " << p << endl;
    cout << "Lebar Persegi Panjang Ini Adalah   : " << l << endl;

    luas= p*l;//rumus menghitung luas persegi panjang

    loopFunction();
    cout << "\nLuas Dari Persegi Panjang Ini adalah : " << luas << endl;
    loopFunction();
    break;

///Ini adalah luas segitiga(3)
    case 3:
    float a, t;
    cout << "\nMasukan alas   : ";
    cin >> a;
    cout << "Masukan tinggi : ";
    cin >> t;

    cout << "\nAlas segitiga Ini Adalah   : " << a << endl;
    cout << "Tinggi segitiga Ini Adalah : " << t << endl;

    luas= 0.5*a*t;//rumus menghitung luas segitiga

    loopFunction();
    cout << "\nLuas Dari Segitiga Ini adalah : " << luas << endl;
    loopFunction();
    break;
    
    case 4:
    default:
        cout << "\nOpsi Yang Dipilih tidak Ditemukan !\n";
        loopFunction();
    break;

return 0;
}}