#include<iostream>
using namespace std;

int main(){
	for(int a = 1; a <= 4; a++){
		for(int b = 1; b < a; b++){
			cout << "b ";
		}
		cout << "a" << endl;
	}	
}


