#include<iostream>
using namespace std;

#define max 5
string nama[max], loop;
int posisi = 0;

void display(){
	system("cls"); 
	
	if(posisi > 0){
		cout << "Data Tersimpan" << endl;
		for(int i = 0; i < posisi; i++){
			cout << i+1 << ". " << nama[i] << endl;
		}	
	} else {
		cout << "<-- Data Kosong -->" << endl;
	}
	cout << endl;
}

void add(){
	do {
		display();
		if(posisi < max){
			cin.ignore();
			cout << "Tambah Data : ";
			getline(cin, nama[posisi]);
			posisi++;
			display();
			cout << "ulangi <y/t> : ";
			cin >> loop;
		} else {
			cout << "<-- memori penuh -->" << endl;
			cout << "isi t untuk kembali : ";
			cin >> loop;
		}
	} while(loop == "y");
}

void edit(){
	int y;
	do {
		display();
		cout << "ubah data ke : ";
		cin >> y;
		cin.ignore();
		cout << "ubah menjadi : ";
		getline(cin, nama[y-1]);
		display();
		cout << "ubah lagi <y/t> : ";
		cin >> loop;	
	} while(loop == "y");
}

void del(){
	int x;
	do {
		display();
		if(posisi > 0){
			cout << "Hapus Data Ke : ";
			cin >> x;
			for(int i = x; i < posisi; i++){
				nama[i-1] = nama[i];
			}
			posisi--;
			display();
			cout << "hapus lagi <y/t> : ";
			cin >> loop;
		} else {
			cout << "isi selain y : ";
			cin >> loop;
		}
	} while(loop == "y");
}

int main(){
	int pil;
	do {
		system("cls");
		cout << "1. Tambah\n2. Ubah\n3. Hapus\n4. Tampil\n5. Keluar\nPilihan : "; 
		cin >> pil;
		switch(pil){
			case 1 :
				add();
				break;
			case 2 :
				edit();
				break;
			case 3 :
				del();
				break;
			case 4 :
				do {
					display();
					cout << "kembali <y/t> : ";
					cin >> loop;
				} while(loop != "y");
				break;
			case 5 :
				cout << "..." << endl;
				break;
			default :
				cout << "Pilih 1 - 5 !" << endl;
				break;
				
		}
	} while(pil != 5);
	cout << "Program Selesai !" << endl;
}
