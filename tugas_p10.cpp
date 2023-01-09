#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cin >> n;

    if (n < 0)
        cout << "Faktorial tidak boleh negative";
    else {
    	cout << n <<"! = ";
        for(int i = n; i >= 1; --i) {
        	if(i == n){
        		cout << i;
			}else {
				cout << " x "<< i;
			}
            factorial *= i;
        }
        cout << " = "<< factorial;
    }

    return 0;
}