#include<iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isEmpty(){
	if(top == 0){
		return true;
	} else {
		return false;
	}
}

bool isFull(){
	if(top >= max){
		return true;
	} else {
		return false;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Data Tersimpan : " << endl;
		for(int a = top-1; a >= 0; a--){
			cout << a+1 << ". " << data[a] << endl;
		}
	} else {
		cout << "Data Tidak Tersedia !" << endl;
	}
	if(isFull()){
		cout << "Queue Penuh" << endl;
	}
	cout << endl;
}

void enqueue(){
	if(!isFull()){
		cout << "Masukkan Data : ";
		cin >> data[top];
		top++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int a = 0; a < top-1; a++){
			data[a] = data[a+1];
		}
		top--;
	}
}

int main(){
	int pil;
	string isi, ulang;
	
	queue:
		system("cls");
		view();
		cout << "Menu Utama\n1. Push\n2. Pop\nPilih : ";
		cin >> pil;
		
	if(pil == 1){
		system("cls");
		enqueue();
		goto queue;
	} else if(pil == 2){
		dequeue();
		goto queue;
	} else {
		
	}
}
