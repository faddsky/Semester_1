#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	string Nama;
	int Nim;
	char Plug;
	
	cout << "Masukkan :" <<endl;
	cout << "Nama\t:" ;
	getline(cin, Nama);
	cout << "NIM\t:";
	cin >> Nim;
	cout << "Plug\t:";
	cin >> Plug;
	
	cout << "\nInilah data anda :" << endl;
	cout << "Nama\t:" << Nama <<endl;
	cout << "NIM\t:" << Nim <<endl;
	cout << "Plug\t:" << Plug << endl;
	
	cout << "\nDalam bentuk tabel :\n";
	cout << setfill('=') << setw(60);
	cout << "\n";
	cout << "\tNIM\t|\tNama\t\t|\tPlug\t\n";
	cout << setfill('=') << setw(60);
	cout << "\n";
	cout << Nim << "\t|" << Nama << "\t|\t" << Plug << "\t\n";
	cout << setfill('-') << setw(60);
	cout << "\t";
}
