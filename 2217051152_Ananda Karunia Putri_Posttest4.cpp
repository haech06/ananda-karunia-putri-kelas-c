#include <iostream>
using namespace std;
int main (){
	
	float ratarata, varians, nilai = 0, jumlah = 0;
	int kamu;
	
	cout << "Masukkan angka:";
	cin >> kamu;
	
	for ( int h = 1; h <= kamu; h++ ){
		jumlah = jumlah + h;}
	ratarata = jumlah / kamu;
	
	for ( int h = 1; h <= kamu; h++ ){
	nilai = nilai + (h - ratarata) * (h - ratarata);}
	varians = nilai / (kamu - 1);
	cout << "Varians:" << varians;
	
	return 0;
}
