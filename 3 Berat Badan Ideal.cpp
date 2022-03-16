#include<iostream>
using namespace std;

int main(){
	string gender;
	float tb, bb, bb_ideal;
	
	cout << "Gender(L/P) \t\t: ";
	cin >> gender;
	
	cout << "Berat Badan (kg) \t: ";
	cin >> bb;
	
	cout << "Tinggi Badan (cm) \t: ";
	cin >> tb;
	
	if(gender == "L"){
		bb_ideal = (tb - 100) - ((tb - 100) * 0.1);
	} else if(gender == "P"){
		bb_ideal = (tb - 100) - ((tb - 100) * 0.15);
	} else {
		cout << "Gender Salah";
		bb_ideal = 0;
	}
	
	if(bb_ideal != 0){
		if(bb == bb_ideal){
			cout << "bb ideal \t\t: " << bb_ideal << " kg" << endl;
			cout << "Berat Badan Anda Ideal";
		} else if(bb > bb_ideal){
			cout << "bb ideal \t\t: " << bb_ideal << " kg" << endl;
			cout << "Berat Badan Anda Gemuk";
		} else {
			cout << "bb ideal \t\t: " << bb_ideal << " kg" << endl;
			cout << "Berat Badan Anda Kurus";
		}
	}
}







