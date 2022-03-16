#include<iostream>
using namespace std;

int main(){
	int nilai;
	string x;
	
	do {
		cout << "nilai : ";
		cin >> nilai;
	
		if(nilai <= 40 and nilai >= 0){
			cout << "E";
		} else if (nilai <= 60){
			cout << "D";
		} else if(nilai <= 75){
			cout << "C";
		} else if(nilai <= 85){
			cout << "B";
		} else if(nilai <= 100){
			cout << "A";
		}
		cout << "\nulangi program (y/t) : ";
		cin >> x;
		system("cls");
	} while(x == "y");
	cout << "Sampai Jumpa";
}









