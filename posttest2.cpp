#include <iostream>
using namespace std;
int main(){
	
	int Harga_Awal;
	cout<<"Harga Awal:";
	cin>>Harga_Awal;
	
	
	cout<<"Harga setelah diskon:"<<endl;
	cout<<Harga_Awal * 90 / 100<<endl;
	
	cout<<"Diskon yang didapatkan:"<<endl;
	cout<<Harga_Awal - (Harga_Awal * 90 / 100)<<endl;
	
	
	return 0;
}
	
	
