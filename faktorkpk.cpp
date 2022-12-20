#include <iostream>
using namespace std;
int main (){
	
	int a, b, c, d = 0;
	cin >> a;
	cin >> b;
	
	if (a > b){
		cout << "Input salah";	
	} else if (a < 0 || a > 1000){
		cout << "Input salah";
	} else if (b < 0 || b > 1000){
		 cout << "Input salah";
	} else{
		for (int f = a; f <= b; f++){
			c = d + f;
			if (c%15 == 0 && c!=0){
				cout << "Lima belas" << " ";
			} else if (c%18 == 0 && d!=0){
				cout << "Delapan belas" << " ";
			} else { cout << c << " ";
			}
		}
	}
	
	
	return 0;
	
}
