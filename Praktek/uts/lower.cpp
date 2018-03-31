#include <iostream>
using namespace std;

int main(){
	char nama[1000];
	cout << "Masukkan Nama : "; cin.getline(nama, sizeof(nama));
	for (int i=0; i<nama[i]; i++){
	    nama[0] = tolower(nama[0]);

	    nama[i] = toupper(nama[i]);
	    if (nama[i] == ' '){
	      nama[i+1] = tolower(nama[i+1]);
	      i++;
	    } 
	}
	cout << nama<<endl;

}
