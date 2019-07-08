#include <iostream>
using namespace std;

int main(void) {
	long int tests, n;
	cin >> tests;
	while (tests--){
	    cin >> n;
	    if (n % 6 == 0){
	        cout << "Misha" << endl;
	    }else{
	        cout << "Chef" << endl;
	    }
	}
	return 0;
}
