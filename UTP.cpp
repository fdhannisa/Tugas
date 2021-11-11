#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

void menu(){
	string menu[5]={"[1] Big Mc 1 ....................Rp 41000",
					"[2] Double Cheese Burger ........Rp 41000",
					"[3] Mc Double ...................Rp 36000",
					"[4] Mc Chicken ..................Rp 36000",
					"[5] Chicken Burger ..............Rp 33000",};sss
					
	cout << "List menu : " << endl;
	for(int i=0;i<5;i++){
		cout << menu[i] << endl;
	}
}

void cek(){
	cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
}

void close(float totalharga){
	cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." << totalharga << endl;
	cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
	cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
	cout << "SELAMAT MENIKMATI" << endl;
}

void maaf(){
	cout<<"Mohon Maaf Kami Tidak Menerima Pesanan Lebih dari 10 km"<<endl;
	cout<<"Karena Tidak Ada Driver Yang Dapat Menjangkau Jarak Sejauh itu"<<endl;
	cout<<"Sekali Lagi Mohon Maaf Dan Terima Kasih"<<endl;
}
int main(){
    string nama;
    float totalharga, ongkir;
    int jarak, bayar, jawab, pesanan;
    int a = 3000, b = 10000, c = 15000, d;
	int harga [5]={43000, 41000, 36000, 35000, 33000};
					
    menu();
    cout << endl;
    cout<<"Masukan Nama Anda 	 	 	 	 : "; 
	cin>> nama;
    cout<<"Masukan Nomor Pesanan Anda 		 	 : "; 
	cin>> pesanan;
    cout<<"Masukan Jarak Rumah Anda Dari Outlet (km) 	 : "; 
	cin>> jarak;

   if(jarak<=10){ 
        if(pesanan==1){
            cout<<"Big Mc 1" << endl;
			cout<<"Harga : " << harga[1] << endl;
			bayar = harga[1];
				if(jarak<=2){
            		cout<<"Ongkir :" << a << endl;
            		ongkir = a;
        		}else if(jarak>2 && jarak<=5){
            		cout<<"Ongkir :" << b << endl;
           			ongkir = b;
        		}else if(jarak>5 && jarak<=10){
            		cout<<"Ongkir :" << c << endl;
            		ongkir = c;
        		}
			cek();
    		cin >> jawab;
    		system("cls");
				if(jawab == 1){
					totalharga = bayar + ongkir;
					close(totalharga);
				}else{
					system("cls");
					main(); 
				}
    	}else if(pesanan==2){
        	cout<<"Double Cheese Burger" << endl;
            cout<<"Harga : " << harga[1] << endl;
            bayar = harga[1];
	            if(jarak<=2){
	            	cout<<"Ongkir :" << a << endl;
	            	ongkir = a;
	        	}else if(jarak>2 && jarak<=5){
	            	cout<<"Ongkir :" << b << endl;
	            	ongkir = b;
	        	}else if(jarak>5 && jarak<=10){
	            	cout<<"Ongkir :" << c << endl;
	            	ongkir = c;
	        	}
	        cek();
    		cin >> jawab;
    		system("cls");
				if(jawab == 1){
			   		totalharga = bayar + ongkir;
				    close(totalharga);
				}else{
					system("cls");
					main();
		   		}
        }else if(pesanan==3){
            cout<<"Mc Double" << endl;
            cout<<"harga : " << harga[2] << endl;
            bayar = harga[2];
	            if(jarak<=2){
		            cout<<"Ongkir :" << a << endl;
		            ongkir = a;
		        }else if(jarak>2 && jarak<=5){
		            cout<<"Ongkir :" << b << endl;
		            ongkir = b;
	        	}else if(jarak>5 && jarak<=10){
		            cout<<"Ongkir :" << c << endl;
		            ongkir = c;
	        	}
		    cek();
		    cin >> jawab;
		    system("cls");
				if(jawab == 1){
		   			totalharga = bayar + ongkir;
					close(totalharga);
		   		}else{
				   	system("cls");
				   	main();
				}
        }else if(pesanan==4){
			cout<<"Mc Chicken" << endl;
			cout<<"harga : " << harga[2] << endl;
			bayar = harga[2];
				if(jarak<=2){
					cout<<"Ongkir :" << a << endl;
					ongkir = a;
				}else if(jarak>2 && jarak<=5){
					cout<<"Ongkir :" << b << endl;
					ongkir = b;
				}else if(jarak>5 && jarak<=10){
					cout<<"Ongkir :" << c << endl;
					ongkir = c;
				}
			cek();
			cin >> jawab;
			system("cls");
				if(jawab == 1){
					totalharga = bayar + ongkir;
					close(totalharga);
				}else{
					system("cls");
					main();
				}
		}else if(pesanan==5){
            cout<<"Chicken Burger" << endl;
            cout<<"harga : " << harga[4] << endl;
            bayar = harga[4];
	            if(jarak<=2){
		            cout<<"Ongkir :" << a << endl;
		            ongkir = a;
		        }else if(jarak>2 && jarak<=5){
            		cout<<"Ongkir :" << b << endl;
            		ongkir = b;
        		}else if(jarak>5 && jarak<=10){
            		cout<<"Ongkir :" << c << endl;
            		ongkir = c;
        		}
            cek();
    		cin >> jawab;
    		system("cls");
	   			if(jawab == 1){
	   				totalharga = bayar + ongkir;
					close(totalharga);
	   			}else{
	   				system("cls");
	   				main();
	   			}
 
        }else if(pesanan>5){
        	cout << endl;
        	cout << "Pesanan Tidak Tersedia" << endl;
        	cout << "Silahkan Cek Kembali Menu Anda" << endl;
        	getch();
        	system("cls");
        	main();
		}
	}else{
		maaf();
	}
	return 0;
}
