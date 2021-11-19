#include <iostream>
using namespace std;

int main(){
	
	int hargabarang, hargatotal;
	int ongkir1 = 41000;
	int ongkir2 = 11000;
	int ongkir3 = 0;
	
	cout<<"Harga Barang =";
	cin>> hargabarang;
	
	if (hargabarang <= 50000) { 
	cout<<"Ongkir =" << ongkir1 << endl;
	hargatotal = hargabarang + ongkir1;
	cout<<"Harga total =" << hargatotal;
	
	
	} else if (hargabarang < 120000){
	  cout<<"Ongkir ="<< ongkir2 << endl;
	  hargatotal = hargabarang + ongkir2;
	  cout<<"Harga total =" << hargatotal;
	  
	
	} else {
	  cout<< "Ongkir ="<< ongkir3 << endl;
	  hargatotal = hargabarang + ongkir3;
	  cout<< "Harga total =" << hargatotal;
	  
	}
	
	return 0;
	
}
