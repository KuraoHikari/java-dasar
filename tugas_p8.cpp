/* Tebak Angka 1-9 */
#include<iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       

using namespace std;
int main ()
{
  int iSecret, iGuess;

  srand (time(NULL));

  iSecret = rand() % 9 + 1;
	cout << "TEBAK ANGKA!\n----------------------------------\n";

  do {
    scanf ("%d",&iGuess);
    if (iSecret<iGuess) {
    	cout <<"\nLebih. Coba lagi!\n";
	}	
    else if (iSecret>iGuess) {
    	cout <<"\nKurang. Coba lagi!\n";
	}
  } while (iSecret!=iGuess);

  puts ("Selamat Anda benar!");
  return 0;
}