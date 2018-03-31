#include <iostream>
using namespace std;

int main(){

	char kalimat[1000];
	cout << "Masukkan Kalimat : "; cin.getline(kalimat,sizeof(kalimat));
	for (int i=0; i<kalimat[i]; i++){
	  if(kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o'){
	    kalimat[i] = toupper(kalimat[i]);
	  }
	}
	cout << endl;
	cout << endl;
	cout <<"----------------------------" << endl;
	cout << kalimat << endl;
	cout << endl;
	cout << endl;
}
