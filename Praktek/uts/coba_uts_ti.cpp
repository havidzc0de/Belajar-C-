#include <iostream>
using namespace std;
int main(){

	int nilai[5];
	cout <<"Masukkan Lima Data Nilai"<<endl;
	cout <<"========================"<<endl;
	cout << "Nilai 1 : "; cin >> nilai[0];
	cout << "Nilai 2 : "; cin >> nilai[1];
	cout << "Nilai 3 : "; cin >> nilai[2];
	cout << "Nilai 4 : "; cin >> nilai[3];
	cout << "Nilai 5 : "; cin >> nilai[4];

	cout << "Datanya adalah" << endl;
	cout << "==============" << endl;
	for (int i=0; i<=4; i++){
	cout << "Nilai Ke-"<<i+1<<" = "<<nilai[i]<<endl;
	}
	
	


}
