#include <iostream>
#include <sstream>  // for string streams
#include <string>  // for string

using namespace std;



string deret(int angka,int limit, int counter, string grade){
	// declaring output string stream
    ostringstream str1;
 
    // Sending a number as a stream into output
    // string
    str1 << angka;
 
    // the str() converts number into string
    string geek = str1.str();
  

  if(angka == limit){
  		grade = grade + geek + ")";
  	
  	cout << counter + limit;
  	
    return grade;
  }else {
  	grade = grade + geek + "+";
  	return deret(angka + 1, limit, counter += angka, grade);
  }
}





int main() {
  int angka_input;
  string grade = "(";


  cout << "Masukkan deret: ";
  cin >> angka_input;
  
  int number = angka_input;

  cout << "Jumlah angka dari 1 hingga " << angka_input << " adalah " << deret(1,angka_input, 0, grade);
  
}