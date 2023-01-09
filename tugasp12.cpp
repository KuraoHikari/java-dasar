#include <iostream>
#include <string>

using namespace std;

int main() {

  int jumlah_barang;

   int total;

  cout << "Masukkan jumlah barang:" << endl;
  cin >> jumlah_barang;


  int arr[jumlah_barang] ;
  string nama[jumlah_barang] ;

  // lengkapi kode untuk menampilkan nama masing-masing anggota di sini!
  for (int i = 0; i < jumlah_barang ; i++) {
	cout << "Apa nama barang no " << i + 1  << "?"<<endl;
  	cin >> nama[i];
  	cout << "Berapa harganya?" << endl;
    cin >>arr[i];
  }
    for (int i = 0; i < jumlah_barang ; i++) {
	total = total + arr[i];
  }
	cout << "Total belanja adalah " << total<< endl;

  return 0;
}