#include <iostream>
using namespace std;
int main(){
	
	int tahun;
	
	cout << "Masukkan tahun:";
	cin >> tahun;
	
	if (tahun %400 == 0){
		cout << "Tahun kabisat";
	} else if (tahun %100 == 0){
		cout << "Bukan tahun kabisat";
	} else if (tahun %4 == 0){
		cout << "Tahun kabisat";
	} else {
		cout << "Bukan tahun kabisat";
	}
}
