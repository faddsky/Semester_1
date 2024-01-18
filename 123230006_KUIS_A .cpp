#include <iostream>
using namespace std;
int main()
{
	int nim, harga, uang, kupon, diskon, kembalian;
	string nama;
	char yn;
	cout << "=== PROGRAM PEMBELIAN===" << endl;
	cout << "Masukkan 3 digit terakhir di NIM Anda : "; 
	cin >> nim;
	cout << "Masukkan Nama Barang : ";
	cin >> nama;
	//getline(cin, nama);
	cout << "Masukkan Harga Barang : ";
	cin >> harga;
	cout << "Masukkan Jumlah Uang yang Dibayarkan :";
	cin >> uang;
	
	if (uang >= harga) {
		cout << "Apakah Anda Memiliki Kupon? (y/n) :";
		cin >> yn;
		
		if (yn == 'y')
		{
			cout << "Masukkan Kode Kupon :";
			cin >> kupon;
			if (kupon==nim) {
				cout << "Kupon Valid" << endl;
				diskon = harga* 8/10;
				kembalian = uang-diskon;
			}
			else {
				cout << "Kupon Tidak valid" << endl;
				kembalian = uang-harga;
			}
		}
		else if (yn == 'n')
		{
			kembalian = uang-harga;
		}
		else 
			cout << "Tidak Valid" << endl;
			
		cout << "Memproses Pembelian" << endl;
		cout << "Pembelian Sukses" << endl;
	
		cout << "\n";
		cout << "=== STRUK PEMBELIAN===" << endl;
		cout << "Nama Barang :" << nama << endl;
		cout << "Harga Barang :" << harga << endl;
		cout << "Uang Pembayaran :" << uang << endl;
		cout << "Kembalian :" << kembalian << endl;
	}
	else 
		cout << "\nPembelian Gagal, Uang Tidak Mencukupi" << endl;
	
	return 0;
}
