#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x, index = 0;
	string buah[] = {"Mangga", "Apel", "Jeruk", "Nanas"};
	// ATAS = 72 BAWAH = 80 KANAN = 77 KIRI = 75 ESC = 27
	do {
		x = getch();
		system("cls");
		if(x == 224){
			x = getch();
			switch(x){
				case 75:
					if(index > 0){
						index--;
					} else {
						index = index;
					}
					cout << buah[index] << endl;
					break;
				case 77:
					if(index < 3){
						index++;
					} else {
						index = index;
					}
					cout << buah[index] << endl;
					break;
			}
		}
	} while (x != 27);
}










