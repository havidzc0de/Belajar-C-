#include <iostream>
using namespace std;

char nama[100];
int main(){
	cout << "Nama : "; cin.getline(nama,sizeof(nama));
	for (int i=0; i<nama[i]; i++){
	nama[0] = toupper(nama[0]);	
		if (nama[i] == ' '){
			nama[i+1] = toupper(nama[i+1]);
		}   
	}	
	cout << nama << endl;


}
