#include<iostream>
using namespace std;

int main(){
	int nilai;
	int kkm = 75;
	cout << "masukkan nilai(0-100) : ";
	cin >> nilai;
	
	if(nilai >= kkm){
		cout << "Tuntas";
	} else {
		cout << "Tidak Tuntas";
	}
}

