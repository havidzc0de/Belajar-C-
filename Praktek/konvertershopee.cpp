#include <iostream>
using namespace std;


int jp,detik;
	int menit,jam,hari,minggu,bulan;

void banner(){
 cout << "	 ____  _                           					" << endl;                          
 cout << "	/ ___|| |__   ___  _ __   ___  ___ 					" << endl;
 cout << "	\\___ \\| '_ \\ / _ \\| '_ \\ / _ \\/ _ \\ 			" << endl;
 cout << "	 __\\  | | | | (_) | |_\\ |  __/  __/				" << endl;
 cout << "	|____/|_| |_|\\___/| .__/ \\___|\\___|				" << endl;
 cout << "	                  |_| konverter v.1        			" << endl;
 cout << "--------------------------------------------------- 	" << endl;
 cout << "--------------[ Coded by | 11170395 ]--------------	" << endl;
 cout << "--------------------------------------------------- 	" << endl << endl;
}

void hitung(){
	cout << "Masukkan Jumlah Product : ";
	cin >> jp;
	detik = jp * 500;
	menit = detik / 60;
	jam = menit / 60;
	hari = jam / 24;
	minggu = hari / 7;
	bulan = hari / 30;
}

void hasil(){
	int sisahari,sisajam,sisamenit,sisadetik;
		sisahari = hari % 30;
		sisajam = jam % 24;
		sisamenit = menit % 60;
		sisadetik = detik % 60;
		cout << endl;
		cout << "=======================================================" << endl;
		cout << "Lama Waktu : " << bulan << " Bulan " << sisahari << " Hari " << sisajam << " Jam " << sisamenit << " Menit " << sisadetik << " Detik " << endl;
		cout << "=======================================================" << endl;
}

int main(){
	banner();
	hitung();
	if(hari >= 30){
		hasil();
	}else if(hari >= 7){
		hasil();
	}else if(jam >= 24){
		hasil();
	}else if(menit >= 60){
		hasil();
	}else if(detik >= 60){
		hasil();
	}else {
		cout << "Lama Waktu : " << detik << " Detik " << endl;
	}
}