#include <iostream>
using namespace std;

void loopFunction(){ 
    for (int i = 1; i <= 150; i++) {
    cout << "-";
  }
} // Loop funct disini saya gunakan untuk memberi garis batas pada output yang dihasilkan oleh code nanti.

int main(){
	int batas, sum;

	loopFunction();

	cout << "\nMasukan Batas (Hanya Bisa Bilangan Positif) : ";
	cin >> batas; //Input disini untuk memberikan batas pada jumlah deret yang mau ditampilkan.

	loopFunction();

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
		  
		loopFunction();

		cout << "\nDeret Bilangan Genap : ";
		for(int genap=1;genap<=batas;genap++) {
			if (genap%2==0) 
				cout<<genap<<" ";
		} 
		  
		sum = 0;
		  for (int genap=1; genap <= batas; genap++) {
			  if (genap%2==0){
				  sum += genap;
			  }
		  } 
		cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Genap : " << sum;
		cout << "\nFaktor bilangan dari " << sum << " adalah 		  : ";
    		for (int genap = sum; genap > 0; --genap){
            	if (sum % genap == 0){
                	cout << genap << " ";
		}
        		} cout << endl;

		loopFunction();

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
				if(prima%j==0){bil++;}
			} if (bil==2){sum += prima;}
		  } 
		cout << "\n\nIni adalah hasil Jumlah dari Deret Bilangan Prima : " << sum;
		cout << "\nFaktor bilangan dari " << sum << " adalah 		  : ";
    		for (int prima = sum; prima > 0; --prima){
            		if (sum % prima == 0){
                	cout << prima << " ";
            	}
        } cout << endl;

		loopFunction();
return 0;
}
	
