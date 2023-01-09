//Program untuk menentukan Nota pabrik tekstil
#include<iostream>
#include <cmath>
#include<math.h>  

using namespace std;

int main(){
	//Deklarasi
	const int satuan = 20000;
	int panjang, tinggi, lebar,jumlah, jumlahRollKain, bonusRoll, total, hemat;
	float luasAlas,luasDuaAtap,luasDuaPintu, luasSatuan, luasTotal;
	
	//Input data
	cout << "Berapa meter tinggi tenda yang diinginkan" << endl;
	cin >> tinggi;
	cout << "Berapa meter panjang tenda yang diinginkan" << endl;
	cin >> panjang;
	cout << "Berapa meter lebar tenda yang diinginkan" << endl;
	cin >> lebar;
	cout << "Berapa buah tenda yang akan dipesan" << endl;
	cin >> jumlah;
	
	luasAlas = panjang * lebar;
	luasDuaPintu = 0.5 * lebar * tinggi * 2;
	luasDuaAtap = sqrt(pow(0.5 * lebar,2) + pow(tinggi,2)) * panjang * 2;
	luasSatuan = luasAlas + luasDuaPintu + luasDuaAtap;
	luasTotal = luasSatuan * jumlah;
	jumlahRollKain = ceil(luasTotal * 0.1); 
	
	if(jumlahRollKain >= 100){
		bonusRoll = floor(jumlahRollKain * 0.01) * 20;
	}else {
		bonusRoll = 0;
	}
	hemat = bonusRoll * satuan;
	total = jumlahRollKain * satuan - hemat;
	
	cout << "------------------------------------" << endl;
	cout << "PABRIK TEKSTIL DEWA" << endl;
	cout << "------------------------------------" << endl;
	
	cout << "\nDetail Pesanan" << endl;
	cout << "Dimensi		: " << panjang << "x" << tinggi << "x" << lebar << " meter"  << endl;
	cout << "Jumlah		: " <<jumlah << " buah"<< endl;
	cout << "Luas satuan	: " <<luasSatuan << " m2 per barang" << endl;
	cout << "Luas total	: " <<luasTotal << " m2" << endl;
	cout << "Total roll	: " <<jumlahRollKain << " roll" << endl;
	cout << "Bonus		: " <<bonusRoll << " roll" << endl;
	
	cout << "\nDetail Harga" << endl;
	cout << "Satuan		: " << "Rp" <<satuan << " per roll"<< endl;
	cout << "Total		: " << "Rp"<<total << endl;
	cout << "------------------------------------" << endl;
	cout << "Anda hemat	: " << "Rp"<<hemat << endl;
		
	
	return 0;
}