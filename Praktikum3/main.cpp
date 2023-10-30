#include <iostream> //Header
using namespace std;
//Standar penilaian 0-59 (E), 60-69 (D), 70-79 (C), 80-89 (B), 90-100 (A)
//Body
int main (){
   float nilai;
   cout << "Input Nilai Kamu : ";
   cin >> nilai; //Untuk memasukan Nilai pada variabel nilai agar dapat diidentifikasi oleh pengkondisian If Else dibawah
   if (nilai <=100 && nilai >=90){
      cout <<  "Anda Mendapatkan Nilai A" << endl;//kondisi ini akan aktif jika nilainya <= 100 dan jika nilainya >= 90 (jadi kondisi ini tuh bakalan keluar outputnya kalau nilainya 90-100)
   }
   else if (nilai>=80 && nilai<=89){
      cout << "Anda Mendapatkan Nilai B" << endl;
   }
   else if (nilai>=70 && nilai<=79){
      cout << "Anda Mendapatkan Nilai C" << endl;
   }
   else if (nilai>=60 && nilai<=69){
      cout << "Anda Mendapatkan Nilai D" << endl;
   }
   else if (nilai>=0 && nilai<=59){
      cout << "Anda Mendapatkan Nilai E" << endl;//kondisi ini akan aktif jika nilainya <= 59 dan jika nilainya >= 0 (ini juga sama kondisinya, tapi ini untuk membatasi nilai bawahnya dan bakalan aktif kalau nilai nya 0-59)
   } else {
      cout << "Tidak Terdefinisi Oleh Grade A, B, C, D, E" << endl;//Kondisi ini akan aktif jika nilai yang diinput > 100 atau < 0
   } 
   
    return 0;
}