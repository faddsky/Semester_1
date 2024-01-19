#include <iostream>
using namespace std;

int main() {
    string kasir, customer;
    int pass, kopi, jml1, jml2, jml3, totalHarga, diskon, uang, kembalian, total, kurang, harga1, harga2, harga3;
    char yn;
    int kopi1 = 5000;
    int kopi2 = 6000;
    int kopi3 = 4000;
    bool kembali = true;

    cout << "Nama Kasir : ";//fadilah
    cin >> kasir;
    cout << "Password : ";//006
    cin >> pass;

    if (kasir == "fadilah" && pass == 006) {
        cout << "\nNama Customer : ";
        cin >> customer;
        cout << "\nMenu" << endl;
        cout << "1. Arabica (5000)" << endl;
        cout << "2. Robusta (6000)" << endl;
        cout << "3. Expresso (4000)" << endl;
        cout << "\n\n";
        do {
            cout << "Pilihan Kopi : ";
            cin >> kopi;
            cout << "\n";

            switch (kopi) {
                case 1:
                    cout << "Nama Kopi : Arabica" << endl;
                    cout << "Harga : " << kopi1 << endl;
                    cout << "Jumlah Pesanan :";
                    cin >> jml1;
                    harga1 = kopi1*jml1;
                    cout << "\nIngin Pesan Lagi? [y] or [n] : ";
                    cin >> yn;
                    if (yn == 'y') {
                        kembali = true;
                    } else {
                        kembali = false;
                    }
                    break;
                    
				case 2:
					cout << "Nama Kopi : Robusta" << endl;
                    cout << "Harga : " << kopi2 << endl;
                    cout << "Jumlah Pesanan :";
                    cin >> jml2;
                    harga2 = kopi2*jml2;
                    cout << "\nIngin Pesan Lagi? [y] or [n] : ";
                    cin >> yn;
                    if (yn == 'y') {
                        kembali = true;
                    } else {
                        kembali = false;
                    }
                    break;
                    
				case 3:
					cout << "Nama Kopi : Expresso" << endl;
                    cout << "Harga : " << kopi3 << endl;
                    cout << "Jumlah Pesanan :";
                    cin >> jml3;
                    harga3 = kopi3*jml3;
                    cout << "\nIngin Pesan Lagi? [y] or [n] : ";
                    cin >> yn;
                    if (yn == 'y') {
                        kembali = true;
                    } else {
                        kembali = false;
                    }
                    break;
                    
				default :
					cout << "Menu Tidak Tersedia" << endl;
            }
        } while (kembali);
        
        total = harga1+harga2+harga3;
        
        if (total >= 100000 && total <200000) {
			diskon=0.10;
		}
		else if (total >= 200000) {
			diskon=0.15;
		}
		else 
			diskon=0;
			
		totalHarga= total - (total*diskon);
        cout << "Total Harga : " << totalHarga <<endl;
			
		cout << "Nominal pembayaran : ";
		cin >> uang;
		if (uang < totalHarga) {
			kurang = totalHarga-uang;
			cout << "Maaf uang anda kurang Rp."<<  kurang <<" Silahkan menemui manajer kami";
		}
		else {
			kembalian = uang - totalHarga;
			cout << "Jumlah Kembalian : " << kembalian;
		}
		   
    } else {
        cout << "\nMaaf, Username/Password Salah" << endl;
    }

    return 0;
}
