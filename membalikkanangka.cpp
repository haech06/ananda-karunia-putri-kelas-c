#include <iostream>
using namespace std;
int main (){
	
	int j;
	cin >> j;
	while (j > 0){
		cout << j%10;
		j = (j - j%10)/10;
	}
	return 0;
}
