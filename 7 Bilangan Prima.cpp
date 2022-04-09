#include<iostream>
using namespace std;

int main(){
	int a;
	string loop;
	do {
		cout << "batas : ";
		cin >> a;
		for(int i = 0; i <= a; i++){
			int mod = 0;
			//cout << "bil " << i << " = ";
			for(int j = i; j > 0; j--){
				int y = i % j;
				if(y == 0){
					mod++;
				}
			}
			if(mod == 2){
				cout << i << " ";
				//cout << "bukan" << endl;
			}
		}
		cout << "\nulangi <y/t> : ";
		cin >> loop;	
		system("cls");
	} while (loop == "y");
	cout << "Program Selesai";
}
