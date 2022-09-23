#include<ctime>
#include<iostream>
using namespace std;

int main() {
   time_t now = time(0);
   string dt = ctime(&now);
   cout <<dt;
} 
