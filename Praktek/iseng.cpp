#include <iostream>
using namespace std;


int main(){
	char bintang[12][12];

	for(int i=0; i<11; i++){
	  	for(int j=0; j<i; j++){
	    	bintang[i][j] = '*';
	    	cout << bintang[i][j];
	  	}
	cout << endl;
	}

	cout <<endl;
	for (int i=11; i>0; i--){
		for(int j=0; j<i; j++){
		bintang[i][j] = '*';
		cout << bintang[i][j];
		}
	cout << endl;
	}
	

	cout << endl;
	for(int i=0; i<11; i++){
		for(int j=11; j>i; j--){
		bintang[i][j] = ' ';
		cout << bintang[i][j];
		}
		for(int j=0; j<i; j++){
		bintang[i][j] = '*';
		cout << bintang[i][j];
		}
	cout << endl;
	}


	cout << endl;
	for(int i=0; i<11; i++){
		for(int j=0; j<i; j++){
		bintang[i][j] = ' ';
		cout << bintang[i][j];
		}
		for(int j=11; j>i; j--){
		bintang[i][j] = '*';
		cout << bintang[i][j];
		}
	cout << endl;
	}



}
