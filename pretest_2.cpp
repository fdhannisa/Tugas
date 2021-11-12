#include <iostream>
#include <cmath>
using namespace std;

int main () {
	//Nama : Wirda diana nesywa
	//NPM : 2117051059
	//Prodi : s1 ilmu komputer
	
	string a;
	cout<<"Masukkan Nama : "<<endl;
	cin>>a;
	float b;
	cout<<"Jumlah Pinjaman : "<<endl;
	cin>>b;
	float c;
	cout<<"Bunga Tunggal Perbulan : "<<endl;
	cin>>c;
	float d;
	cout<<"Lama Peminjaman : ";
	cin>>d;
	
	float angsuran_pokokperbulan;
	angsuran_pokokperbulan = b/c;
	float angsuran_bungaperbulan;
	angsuran_bungaperbulan = (b*c)/12;
	float angsuran_total;
	angsuran_total = angsuran_pokokperbulan+angsuran_bungaperbulan;
	
	cout<<"Nama Peminjam :"<<a<<endl;
	cout<<"Cicilan Perbulan :"<<angsuran_total<<endl;
	
	
	return 0;
}
