#include <iostream>
using namespace std;
int a,b,c;
bool hasil;

int main(){
	cout << "Masukkan Angka Pertama : ";
	cin >> a;
	cout << "Masukkan Angka Kedua : ";
	cin >> b;
	c = a+b;
	hasil = c > 9;
	if (hasil=hasil){
		cout << "LULUS\n";
	}else{
		cout << "Tidak LULUS\n";
	}
}

