#include <iostream>
using namespace std;

char nama[100];
char alamat[100];

int main(){

	cout << "Nama : "; cin.getline(nama,sizeof(nama));
	cout << "Alamat : "; cin.getline(alamat,sizeof(alamat));
	cout << "Namanya adalah : " << nama <<endl;
	cout << "Alamatnya adalah : " << alamat <<endl;

}
