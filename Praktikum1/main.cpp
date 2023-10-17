#include <iostream>
using namespace std;

/*Nama  : Rafaisya Dwi Adrianto */
/*NPM   : 2310631170147*/
/*Kelas : 1C Informatika */

void loopFunction(){
     for (int i = 0; i < 100; ++i){
        cout << "-";
    }};

int main()
{

    loopFunction();

    string nama;
    cout << "\n" << "Nama : ";
    getline(cin, nama);
    cout << "\n";

    int64_t nNPM = 2310631170147;
    cout << "NPM : " << nNPM << "\n\n";

    string kelas = "1C - Informatika";
    cout << "Kelas : " << kelas << "\n\n";

    string cita;
    cout << "Cita - Cita : ";
    getline(cin, cita);
    cout << "\n";

    string motivasi;
    cout << "Motivasi Masuk Prodi : ";
    getline(cin, motivasi);

    loopFunction();
    return(0);
}
