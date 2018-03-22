#include <iostream>
using namespace std;
#define E << endl;
#define O cout <<
#define I cin >> 

extern string namaku;

string cpp = "Belajar C++"; // variabel global
string nama = "Izza "; //variabel global

void belajar() {
	cout << cpp E //manggil variabel global
}

int main (){
	string nama = "Mujahid"; //variabel scope pertama
	{
		int umur = 20;
		O "Nama : " << nama  E //variabel lokal scope ke dua
		O "Umur : " << umur  E
	} // variable umur akan dihancurkan
	int umur = 30; // variable lokal scope pertama
	cout << endl;
	cout << "Umur " << ::nama << " 10 tahun kemudian : " << umur E // Scope Resolution Operator ( :: ) agar dapat mengakses variabel global ketika ada identifier yang sama(nama)

	belajar(); //manggil fungsi belajar yg didalamnya manggil variable global


	return 0;

}