#include <iostream>
using namespace std;

void pembatas(){ 
    for (int i = 1; i <= 150; i++) {
    cout << "-";
  }
} // Loop funct disini saya gunakan untuk memberi garis batas pada output yang dihasilkan oleh code nanti.

int main(){
	int batas, sum;
	
	pembatas();
	do {
	cout << "\nMasukan Batas (Hanya Bisa Bilangan Positif) : ";
	cin >> batas; //Input disini untuk memberikan batas pada jumlah deret yang mau ditampilkan.
	} while (batas <=0);
	
	pembatas();
		cout << "\nDeret Bilangan Ganjil : ";
		for(int ganjil=1; ganjil <= batas; ganjil++){
		  if (ganjil%2!=0){
		  	cout << ganjil << " ";
	      		} 
		}
		  for (int ganjil=1; ganjil <= batas; ganjil++) {
			if (ganjil%2!=0){
			sum += ganjil;
			}
		  } 
		cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Ganjil : " << sum;
		cout << "\nFaktor bilangan dari " << sum << " adalah 		   : ";
    		for (int ganjil = sum; ganjil > 0; --ganjil){
            		if (sum % ganjil == 0){
                	cout << ganjil << " ";
            		}
        	} 
        sum = 0; //Sum =0 disini untuk mereset kembali hasil dari penjumlahan deret diatasanya agar menjadi 0, agar tidak ikut ter jumlah di sum selanjutnya
        cout << endl;
		  
	pembatas();
		cout << "\nDeret Bilangan Genap : ";
		for(int genap=1;genap<=batas;genap++) {if (genap%2==0) cout<<genap<<" ";} 
		  
		for (int genap=1; genap <= batas; genap++) {if (genap%2==0){sum += genap;}} 
			cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Genap : " << sum;
		  	cout << "\nFaktor bilangan dari " << sum << " adalah 		  : ";
    		for (int genap = sum; genap > 0; --genap){
            		if (sum % genap == 0){
                		cout << genap << " ";}
        			} 
        sum = 0;
        cout << endl;

	pembatas();
        cout << "\nDeret bilangan prima : ";
		for (int prima = 2; prima <= batas; ++prima){
			int bilanganPrima = 1;
			for (int j = 2; j * j <= prima; ++j){
				if (prima % j == 0){
				bilanganPrima = 0;
				break;
				}
			}
			if (bilanganPrima == 1){
				cout << prima << " ";
				sum += prima;
				}
			} 
		cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Prima : " << sum;
		cout << "\nFaktor bilangan dari " << sum << " adalah 		  : ";
    			for (int prima = sum; prima > 0; --prima){
            			if (sum % prima == 0){
                		cout << prima << " ";
            			}
        	} cout << endl;
	pembatas();
return 0;
}
