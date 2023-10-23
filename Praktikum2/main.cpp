#include <iostream> //Header//
using namespace std;

void loopFunction(){
     for (int i = 0; i < 100; ++i){
        cout << "-";
    }};

int main()
{
   loopFunction();
///Dengan Variabel Tambahan
   string a,b,c;
   cout << "\n(Data Sebelum Proses Pertukaran)\n";
   cout << "Masukan Nilai First Value : ";
   cin >> a;

   cout << "Masukan Nilai Second Value : ";
   cin >> b;
   
   //Proses Pertukaran Variabel
      c = a;
      a = b;
      b = c;

//Hasil
   cout << "\n(Data Setelah Proses Pertukaran)\n";
   cout << "Nilai Fist Value adalah " << a << endl;
   cout << "Nilai Seond Value adalah " << b << "\n\n";

///Tanpa Variabel Tambahan
   loopFunction();
   int firstValue = 10;
   int secondValue = 15;
	cout << "\n\n(Data Sebelum Proses Pertukaran)\n";
	cout << "Nilai First Value : " << firstValue;
	cout << "\nNilai Second Value : " << secondValue;

//Hasil	
	cout << "\n\n(Data Setelah Proses Pertukaran)\n";
	cout << "Nilai First Value : " << secondValue;
	cout << "\nNilai Second Value : " << firstValue << endl;

   loopFunction();
   cout << "\n";
   loopFunction();

///Pembagian Rata
   int m, n;
   cout << "\nMasukan Nilai M : ";
   cin >> m;

   cout << "Masukan Nilai N : ";
   cin >> n;

   //Prosses Pembagian Sama Rata
   int bagi = m/n;
   int sisa = m%n;

//Hasil
   cout << "\nHasil Baginya Adalah : " << bagi;
   cout << "\nSisa Dari Pembagiannya Adalah : " << sisa << "\n";
   loopFunction();
};