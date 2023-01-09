// Program memasukan data mahasiswa

#include <iostream>
using namespace std;

int main() {
	char nama[20];
	char nim[20];
	char jurusan[20];
	char gender[20];
	char tmptgl[80];
    cout << "Masukan Nama! \n";
    cin >> nama ;
    cout << "\nMasukan NIM! \n";
    cin >> nim ;
    cout << "\nMasukan Jurusan! \n";
    cin >> jurusan ;
    cout << "\nMasukan Tempat dan Tanggal Lahir! \n";
    cin >> tmptgl ;
    cout << "\nMasukan Gender! \n";
    cin >> gender ;
	cout << "\nNama : " << nama  << "\nNIM : " << nim  << "\nJurusan : "<< jurusan  << "\nTempat dan Tanggal Lahir : "<< tmptgl << "\nGender : "<< gender ;
    return 0;
}