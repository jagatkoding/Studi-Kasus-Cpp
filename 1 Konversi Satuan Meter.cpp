#include<iostream>
using namespace std;

int main(){
	string satuan[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
	string awal, akhir;
	int x, y;
	double angka, hasil;
	int a = sizeof(satuan)/sizeof(*satuan);
	
	cout << "angka \t : "; cin >> angka;
	cout << "awal \t : "; cin >> awal;
	cout << "akhir \t : "; cin >> akhir;
	
	for(int f = 0; f < a; f++){
		if(awal == satuan[f]){
			x = f+1;
		}
		if(akhir == satuan[f]){
			y = f+1;
		}
	}
	//cout << "x = " << x << endl;
	//cout << "y = " << y << endl;
	hasil = angka;
	if(x < y){
		//cout << "turun (perkalian)";
		int z = y - x;
		for(int k = 0; k < z; k++){
			hasil *= 10;
		}
	} else if(x > y){
		//cout << "naik (pembagian)";
		int z = x - y;
		for(int k = 0; k < z; k++){
			hasil /= 10;
		}
	} else {
		//cout << "awal = akhir";
		hasil = angka;
	}
	cout << endl;
	cout << angka << " " << awal << " = " << hasil << " " << akhir;
}










