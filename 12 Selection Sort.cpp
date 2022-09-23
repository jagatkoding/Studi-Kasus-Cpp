#include<iostream>
using namespace std;

int main(){
	int temp,pos;
	int x[] = {3, 4, 6, 5, 2};
	int j = sizeof(x)/sizeof(*x);
	cout << "y : ";
	for(int a = 0; a < j; a++){
		cout << x[a] << " ";		
	}
	cout << endl;
	//proses sorting
	for(int b = 0; b < j; b++){
		temp = x[b];
		pos = b;
		for(int c = b; c < j; c++){
			if(x[c] < temp){
				temp = x[c];
				pos = c;
			}
		}
		x[pos] = x[b];
		x[b] = temp;
		
		cout << endl;
		cout << b << " : ";
		for(int a = 0; a < j; a++){
			cout << x[a] << " ";		
		}
	}
	cout << endl;
	cout << endl;
	cout << "z : ";
	for(int a = 0; a < j; a++){
		cout << x[a] << " ";		
	}
}
