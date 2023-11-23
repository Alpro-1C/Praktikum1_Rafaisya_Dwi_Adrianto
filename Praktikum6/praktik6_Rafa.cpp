#include <iostream>
using namespace std;

void orna(){
    for (int i = 1; i<150; i++){
    cout << "=";
}};

int main() {
    int n;

    system("cls");//untuk membersihkan terminal apabila ingin run kembali code
    orna();//orna adalah dekorasi pembatas saja
    do {
        cout << "\nMasukkan jumlah elemen dalam array: ";
        cin >> n;

        if (n <= 0) {
            cout << "Jumlah elemen harus lebih dari 0. Masukan Ulang !" << endl;
        }
        orna();
        cout << endl;
    } while (n <= 0); //kondisi ini akan melakukan perulangan apabila nilai n nya kurang/sama dengan 0

    //nilai (n) digunakan sebagai berapa banyak jumlah indeks dalam array, menggunakan nilai yang diinputkan tadi
    int arr[n];

    orna();
    cout << "\nMasukkan elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arr[i];
    }// users akan melakukan input elemen array sesuai dengan jumlah elemen (n) yang diinputkan diawal dengan menggunakan perulangan

    //lalu disini nilai array akan dideklarasikan sebagain int nilai_tertinggi dan indeks nya dideklarasikan sebagai indeks_tertinggi
    //untuk menyimpan hasil sorting, untuk menemukan indeks dan nilai tertingginya
    int nilai_tertinggi = arr[0];
    int indeks_tertinggi = 0;

    
    //loopingan disini digunakan untuk mencari nilai dan indeks tertinggi pada array yang diinputkan tadi
    //hasil dari sortingnya akan disimpan pada int nilai_tertinggi dan int indeks_tertinggi hingga semua arraynya selesai disorting
    for (int i = 1; i < n; ++i) {
        if (arr[i] > nilai_tertinggi) {
            nilai_tertinggi = arr[i];
            indeks_tertinggi = i;
        }
    }

    orna();
    //setelah selesai melakukan sorting makan disini akan langsung menampilkan hasil dari sorting nilai tertinggi tadi dan indeksnya berapa
    //disini int nilai_tertinggi dan int indeks_tertinggi yang menyimpan nilai hasil sorting tadi akan dipanggil untuk ditapilkan
    cout << "\nNilai tertinggi adalah " << nilai_tertinggi << " pada indeks " << indeks_tertinggi << "." << endl;

    // Mengecek apakah nilai tertinggi ada dalam array
    //bool yang digunakan untuk melakukan validasi apabila array[i] sama dengan nilai tertinggi maka bool nya akan berubah menjadi true
    bool cek_nilai = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == nilai_tertinggi) {
            cek_nilai = true;
            break;
        }
    }

    orna();
    if (cek_nilai) {
        cout << "\nNilai tertinggi ada dalam array." << endl;
    } else {
        cout << "\nNilai tertinggi tidak ditemukan dalam array." << endl;
    }            

    orna();
    return 0;
}
