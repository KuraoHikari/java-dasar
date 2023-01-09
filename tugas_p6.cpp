#include <iostream>
#include <string>
using namespace std;


int main() {
	string hari_diketahui,hari_ditanya;
	int tanggal_diketahui,tanggal_ditanya,nilai_hari_ditanya, nilai_hari_diketahui;
	cout << "Masukkan hari yang diketahui:\n";
	cin >> hari_diketahui;
	cout << "Masukkan tanggal untuk hari tersebut:\n";
	cin >> tanggal_diketahui;
	cout << "Masukkan hari yang ditanyakan tanggalnya:\n";
	cin >> hari_ditanya;
	if(hari_diketahui == "senin"){
		nilai_hari_diketahui = 1;
	}else if(hari_diketahui == "selasa"){
		nilai_hari_diketahui = 2;
	}else if(hari_diketahui == "rabu"){
		nilai_hari_diketahui = 3;
	}else if(hari_diketahui == "kamis"){
		nilai_hari_diketahui = 4;
	}else if(hari_diketahui == "jumat"){
		nilai_hari_diketahui = 5;
	}else if(hari_diketahui == "sabtu"){
		nilai_hari_diketahui = 6;
	}else if(hari_diketahui == "minggu"){
		nilai_hari_diketahui = 7;
	}else {
		cout << "tolong masukan hari diketahui dengan benar cothoh : senin, selasa, rabu, kamis, jumat, sabtu, minggu";
	}
	
	if(hari_ditanya == "senin"){
		nilai_hari_ditanya = 1;
	}else if(hari_ditanya == "selasa"){
		nilai_hari_ditanya = 2;
	}else if(hari_ditanya == "rabu"){
		nilai_hari_ditanya = 3;
	}else if(hari_ditanya == "kamis"){
		nilai_hari_ditanya = 4;
	}else if(hari_ditanya == "jumat"){
		nilai_hari_ditanya = 5;
	}else if(hari_ditanya == "sabtu"){
		nilai_hari_ditanya = 6;
	}else if(hari_ditanya == "minggu"){
		nilai_hari_ditanya = 7;
	}else {
		cout << "tolong masukan hari diketahui dengan benar cothoh : senin, selasa, rabu, kamis, jumat, sabtu, minggu";
	}

	
	
	if(nilai_hari_ditanya== nilai_hari_diketahui){
		tanggal_ditanya = tanggal_diketahui + 7;
	}else if(nilai_hari_ditanya < nilai_hari_diketahui){
		tanggal_ditanya = tanggal_diketahui + 7 + (nilai_hari_ditanya - nilai_hari_diketahui);
	}else {
		tanggal_ditanya = tanggal_diketahui + (nilai_hari_ditanya - nilai_hari_diketahui);
	}      
	  
	if(tanggal_ditanya>30){
		tanggal_ditanya -= 30;
	}
	                               
	cout << "Hari " <<hari_ditanya <<  " berikutnya jatuh pada tanggal "  << tanggal_ditanya;
  return 0;                             
}