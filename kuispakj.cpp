#include <iostream>
using namespace std;
int main (){
	
	int m [7];
	int j, rata, nm = 0, jm = 0;
	
	cin >> j;
	if (j == 0);
	
	for (int k = 0; k < j; k++){
		cin >> m [k];
		jm += m [k];
	}
	rata = jm / j;
	cout << " " << rata << endl;
	
	for (int k = 0; k < j; k++){
		if ( m [k] >= rata) nm ++;
	}
	cout << " " << nm << endl;
}
