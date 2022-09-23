#include<iostream>
#include<string>
using namespace std;

int main(){
	string isi = "Tahu";
	
	int p = isi.length();
	
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < p + 3; b++){
			if(a == 1 && b > 1 && b < p + 2){
				cout << isi[b-2] << " ";
			} else {
				cout << "* ";
			}
		} cout << "*" << endl;
	}
	
}
