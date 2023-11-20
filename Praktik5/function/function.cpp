#include <iostream>
using namespace std;

int batas, validasi;

void pembatas() {
    for (int i = 0; i < 150; i++) {
        cout << "=" ;
    }
}

//function deret bilangan, menggunakan function dengan parameter
void deretBilangan (int batas){
    int sum;
        
            pembatas();
                cout << "\nDeret Bilangan Ganjil : ";
                for(int ganjil=1; ganjil <= batas; ganjil++){
                if (ganjil%2!=0)
                cout << ganjil << " ";
                } 
                
                sum =0;
                for (int ganjil=1; ganjil <= batas; ganjil++) {
                    if (ganjil%2!=0){
                    sum += ganjil;}
                } cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Ganjil : " << sum;
                cout << "\nFaktor bilangan dari " << sum << " adalah 		   : ";
                    for (int ganjil = sum; ganjil > 0; --ganjil){
                    if (sum % ganjil == 0){
                        cout << ganjil << " ";
                    }
                } 
                cout << endl;
                
                pembatas();
                cout << "\nDeret Bilangan Genap : ";
                for(int genap=1;genap<=batas;genap++) {if (genap%2==0) cout<<genap<<" ";} 
                
                sum =0;
                for (int genap=1; genap <= batas; genap++) {if (genap%2==0){sum += genap;}} 
                    cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Genap : " << sum;
                    cout << "\nFaktor bilangan dari " << sum << " adalah 		  : ";
                    for (int genap = sum; genap > 0; --genap){
                        if (sum % genap == 0){
                            cout << genap << " ";}
                        } 
                        cout << endl;

                pembatas();
                int total =0;
                cout << "\nDeret bilangan prima : ";
                for(int prima=2;prima<=batas;prima++){
                int bil=0;
                sum =0;
                for(int j=2;j<=prima/2;j++){
                if(prima%j==0){
                    bil=1;
                    break;
                    }
                } if (bil==0 && batas !=0){
                cout << prima << " ";
                total += prima;
                }
                }

                cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Prima : " << total;
                cout << "\nFaktor bilangan dari " << total << " adalah 		  : ";
                    for (int f = total; f > 0; --f){
                    if (total % f == 0){
                        cout << f << " ";
                    }
                }
            cout  << endl;     
            pembatas();
    }

//function segitiga pyramid
void segitigaPyramid(){
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
}

//function fibonacci, menggunakan function rekursif
int fibonacci(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2)); // ini adalah penggunaan function rekursif, karen si function itu sendiri digunakan didalamm functionnya
  }
}
