#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int simpananpokok, simpananbulanan, bunga, lamasimpanan, jumlah;
	
	cout<<"Simpanan pokok =";
	cin>> simpananpokok;
	cout<<"Bunga per-bulan =";
	cin>> bunga;
	cout<<"Lama simpanan =";
	cin>> lamasimpanan;
	
	cout<<"Simpanan pokok ="<<simpananpokok << endl;
	for (int i = 1; i <= lamasimpanan; i++){
		jumlah = simpananpokok+(simpananpokok*bunga/100);
		cout<<"Bulan ke -"<< i <<" "<< jumlah << endl;
		simpananpokok = jumlah;
	 
	} 
	return 0;
}
