#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int iSecret;
  srand(time(NULL));

  int angka_disimpan = rand() % 9 + 1;
  int jumlah_kesempatan = 3;
  int angka_tebakan;
  bool apakah_sudah_benar = false;
  int mao_ngapain;
  int skor = 0;

  while (mao_ngapain != 3) {

    cout << "\n------------------------" << endl;
    cout << "TEBAK ANGKA" << endl;
    cout << "------------------------" << endl;
    cout << "1.  Mulai bermain" << endl;
    cout << "2.  Cek Skor" << endl;
    cout << "3.  Keluar" << endl;
    cout << "masukan pilihan anda" << endl;
    cin >> mao_ngapain;

    switch (mao_ngapain) {
    case 1:
      // code block

      while (apakah_sudah_benar == false) {
        cout << "Masukkan angka dari 1 - 9!" << endl;
        cin >> angka_tebakan;
        if (jumlah_kesempatan > 0) {
          if (angka_tebakan >= 1 && angka_tebakan <= 9) {
            if (angka_tebakan > angka_disimpan) {
              jumlah_kesempatan--;
              if (jumlah_kesempatan > 0) {
                cout << "Terlalu besar, "
                     << "Kesempatanmu sisa " << jumlah_kesempatan;
              } else {
                cout << "Terlalu besar, "
                     << "kamu kalah dan angka yang benar " << angka_disimpan;
                apakah_sudah_benar = true;
              }

            } else if (angka_tebakan < angka_disimpan) {
              jumlah_kesempatan--;
              if (jumlah_kesempatan > 0) {
                cout << "Terlalu kecil, "
                     << "Kesempatanmu sisa " << jumlah_kesempatan;
              } else {
                cout << "Terlalu besar, "
                     << "kamu kalah dan angka yang benar " << angka_disimpan;
                apakah_sudah_benar = true;
              }

            } else {
              cout << "Selamat, Anda benar!";
              apakah_sudah_benar = true;
              skor += 100 * jumlah_kesempatan;
            }
          } else {
            jumlah_kesempatan--;
            cout << "Angka tidak valid. "
                 << "Kesempatanmu sisa " << jumlah_kesempatan;
          }

          if (apakah_sudah_benar == false) {
            cout << " Coba lagi!" << endl;
          }
        } else {
          apakah_sudah_benar = true;
        }
      }
      break;
    case 2:
      // code block
      cout << skor;
      break;
    default:
      // code block
      cout << "Kembali Lagi kaopan kapan ";
    }
  }
}