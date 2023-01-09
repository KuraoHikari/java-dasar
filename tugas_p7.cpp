//Program untuk menentukan total harga donat
#include<iostream>
#include <cmath>

using namespace std;

int main(){
	//Deklarasi
	const int donat = 1500;
	const int gratisSetiap = 10;
	const int minimum_harga_diskon = 50000;
	const float diskon = 0.15;
	
	int jumlah;
	int total_harga;
	int potongan_harga;
	int donat_gratis;
	
	//Input data
	cout << "Masukkan jumlah pesanan!" << endl;
	cin >> jumlah;
	
	total_harga = jumlah * 1500;
	
	if(total_harga >= 50000){
		potongan_harga = total_harga * diskon;
		total_harga -= potongan_harga;
	}
	donat_gratis = floor(jumlah * 0.1) * 3 ;
	
	//Output data
	cout << "Harga yang harus dibayarkan adalah Rp" << total_harga<< "\ntotal donat yang di dapat" << jumlah + donat_gratis << " \njumlah donat yang di pesan"<< jumlah;
	
	
	return 0;
}