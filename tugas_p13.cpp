#include <iostream>

using namespace std;

int main() {
  int ukuran;

  cout << "Masukkan ukuran persegi ajaib!" << endl;
  cin >> ukuran;
  if (ukuran == 1) {

  } else if (ukuran % 2 > 0) {
    int arr[ukuran][ukuran];
    // isi arr dengan ngaka 0
    for (int i = 0; i < ukuran; i++) {
      for (int j = 0; j < ukuran; j++) {

        arr[i][j] = 0;
      }
    }

    int baris = 0;
    int kolom = ukuran / 2;

    int nextBaris;
    int nextKolom;

    for (int i = 1; i <= ukuran * ukuran; i++) {
      arr[baris][kolom] = i;
      nextBaris = (baris - 1 + ukuran) % ukuran;
      nextKolom = (kolom + 1) % ukuran;
      if (arr[nextBaris][nextKolom] == 0) {
        baris = nextBaris;
        kolom = nextKolom;
      } else {
        baris = (baris + 1) % ukuran;
      }
    }
    // test
    int arrCheckerHorizontal[ukuran];
    int arrCheckerVertikal[ukuran];

    for (int i = 0; i < ukuran; i++) {
      int horizontalCheck = 0;
      int verticalCheck = 0;

      for (int j = 0; j < ukuran; j++) {
        horizontalCheck += arr[i][j];
        verticalCheck += arr[j][i];
      }

      arrCheckerHorizontal[i] = horizontalCheck;
      arrCheckerVertikal[i] = verticalCheck;
      horizontalCheck = 0;
      verticalCheck = 0;
    }
    int kiri = 0;
    for (int i = 0; i < ukuran; i++) {

      kiri += arr[i][i];
    }
    int kanan = 0;
    int o = ukuran - 1;
    for (int i = 0; i < ukuran; i++) {

      kanan += arr[i][o];
      o--;
    }

    bool test = true;
    if (kiri != kanan) {
      test = false;
      cout << "logicmu salah";
    }
//    cout << endl<<arrCheckerHorizontal[0] <<endl;
//      cout << endl<<arrCheckerHorizontal[1] <<endl;
//        cout << endl<<arrCheckerHorizontal[2] <<endl;
    
    cout << "horizontal check" << endl;
    for (int i = 0; i < ukuran - 1; i++) {
//cout << arrCheckerHorizontal[i] << "=" << arrCheckerHorizontal[i + 1];
      if (arrCheckerHorizontal[i] == arrCheckerHorizontal[i + 1]) {
        cout << arrCheckerHorizontal[i] << "=" << arrCheckerHorizontal[i + 1]
             << endl;
      }else{
         test = false;
      }

    }
    cout << "vertikal chek" << endl;
    for (int i = 0; i < ukuran - 1; i++) {

      if (arrCheckerVertikal[i] == arrCheckerVertikal[i + 1]) {
        cout << arrCheckerVertikal[i] << "=" << arrCheckerVertikal[i + 1]
             << endl;
      }else{
         test = false;
      }
    }
    if (test == true){
      cout << "Semua test benar"<<endl;
    }else{
      cout << "kode salah"<<endl;
      return 0;
    }

    for (int i = 0; i < ukuran; i++) {
      for (int j = 0; j < ukuran; j++) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }

  }
}