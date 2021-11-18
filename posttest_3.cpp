#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	string namapeminjam	;
	int jumlahpinjaman = 0;
	int bungaperbulan = 5;
	int lamapeminjaman = 12;
	int cicilanperbulan;
	
	
	cout<< "Nama peminjam     :";
	cin>> namapeminjam;
	cout<< "Jumlah pinjaman   : Rp";
	cin>> jumlahpinjaman;
	cout<< "Bunga per-bulan   :";
	cin>> bungaperbulan;
	cout<< "Lama peminjaman   :";
	cin>> lamapeminjaman;
	
	
	cout<< "Nama peminjam     :" <<namapeminjam<< endl;
	cout<<"Cicilan per-bulan : Rp"<<jumlahpinjaman*bungaperbulan/lamapeminjaman<<endl;
	
	
	cout<<"Jaka"<<endl;
	cout<<"Rp"<<endl;
	
	
	cout<<"Nama peminjam     :"<<namapeminjam<<endl;
	cout<<"Cicilan per-bulan : Rp"<<jumlahpinjaman/lamapeminjaman*bungaperbulan<<endl;

	return 0;
	
	
}
