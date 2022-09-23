#include<iostream>
using namespace std;

int main(){
	int i = 7;
	for(int x = 1; x <= i; x++){
		for(int y = 1; y < x; y++){
			if(x == 1 || x == i || y == 1){
				cout << "o ";
			} else {
				cout << "  ";
			}
		}
		cout << "o" << endl;
	}
}
