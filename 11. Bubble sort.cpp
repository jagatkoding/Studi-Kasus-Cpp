#include<iostream>
using namespace std;

int main(){
	int temp;
	int x[] = {5, 2, 1, 4};
	int j = sizeof(x)/sizeof(*x);
	cout << "x : ";
	for(int a = 0; a < j; a++){
		cout << x[a] << " ";		
	}
	cout << endl;
	//proses sorting
	for(int b = 0; b < j; b++){
		int acak = 0;
		for(int c = 0; c < j-1; c++){
			if(x[c] > x[c+1]){
				temp = x[c];
				x[c] = x[c+1];
				x[c+1] = temp;
				acak++;
			}
		}
		if(acak == 0){
			break;
		}
		cout << endl;
		cout << b+1 << " : ";
		for(int a = 0; a < j; a++){
			cout << x[a] << " ";		
		}
	}
	cout << endl;
	cout << endl;
	cout << "y : ";
	for(int a = 0; a < j; a++){
		cout << x[a] << " ";		
	}
}
