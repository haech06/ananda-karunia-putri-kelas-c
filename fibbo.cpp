#include <iostream>
using namespace std;
int main (){
    int taehyung, p1 = 0, p2 = 1, bts;
    
    cin >> taehyung;
    for (int a = 1; a <= taehyung; a++)
        if (a == 1){
            cout << p1 << " "; }
        else if (a == 2){
            cout << p2 << " ";}
        else {bts = p2 + p1;
              p1 = p2;
              p2 = bts;
          
		      cout << bts << " "; }
		      
		      return 0;
        }
        


