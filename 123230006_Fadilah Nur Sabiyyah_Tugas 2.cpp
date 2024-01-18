#include <iostream>
using namespace std;
int main()
{
	//deklarasi variabel
	char nim[9], nama[100];
	float nilai1, nilai2, nilai3, nilai4, total, rata_rata;
	int semester;
	
	//user memasukkan data
	cout<< "\tHitung Nilai Mahasiswa"<<endl;
	cout<<"Masukkan nama: ";
	cin.getline(nama,sizeof (nama));
	cout<<"Masukkan NIM: "; cin>>nim;
	cout<<"Semester: "; cin>>semester;
	cout<<"Nilai Algoritma: "; cin>>nilai1;
	cout<<"Nilai Kalkulus: "; cin>>nilai2;
	cout<<"Nilai Basis Data: "; cin>>nilai3;
	cout<<"Nilai Olahraga: "; cin>>nilai4;
	
	cout<< "\nNilai Mahasiswa"<<endl;
	cout<< "Nama: "<<nama<<endl;
	cout<< "NIM: "<<nim<<endl;
	switch (semester){ //program akan melakukan pengecekan kondisi
		case 1://jika user memasukkan angka 1
		cout<< "Semester: 1(Ganjil)";
		break;
		
		case 2: //jika user memasukkan angka 2
		cout<< "Semester: 2(Genap)";
		break;
		
		case 3: //jika user memasukkan angka 3
		cout<< "Semester: 3(Ganjil)";
		break;
		
		case 4: //jika user memasukkan angka 4
		cout<< "Semester: 4(Genap)";
		break;
		
		case 5: //jika user memasukkan angka 5
		cout<< "Semester: 5(Ganjil)";
		break;
		
		case 6: //jika user memasukkan angka 6
		cout<< "Semester: 6(Genap)";
		break;
		
		case 7: //jika user memasukkan angka 7
		cout<< "Semester: 7(Ganjil)";
		break;
		
		case 8: //jika user memasukkan angka 8
		cout<< "Semester: 8(Genap)";
		break;
		
		default: // jika user memasukkan nagka yang tidak memnuhi syarat diatas
		cout<< "ra umum"<<endl;
		break;
	}
	
	//program akan menampilkan nilai yang telah diinput user
	cout<< "\n\t===\tNilai\t==="<<endl;
	cout<<"Nilai Algoritma: "<<nilai1<<endl;
	cout<<"Nilai Kalkulus: "<<nilai2<<endl;
	cout<<"Nilai Basis Data: "<<nilai3<<endl;
	cout<<"Nilai Olahraga: "<<nilai4<<endl;
	
	//program menghitung rata rata nilai yang diinput user
	total= nilai1+ nilai2+ nilai3+ nilai4;
	cout<<"Total Nilai: "<<total<<endl;
	rata_rata = (nilai1+ nilai2+ nilai3+ nilai4)/4;
	cout<<"Rata-rata: "<<rata_rata<<endl;
	
	if(rata_rata<=100 && rata_rata>=90)//jika rata rata nilai 90 sampai 100
		{cout<< "Kategori: A"<<endl;
		cout<<"Status: Lulus";}
	else if (rata_rata<90 && rata_rata>=80)//jika rata rata nilai 80 sampai 89
		{cout<< "Kategori: B"<<endl;
		cout<<"Status: Lulus";}
	else if (rata_rata<80 && rata_rata>=70)//jika rata rata nilai 70 sampai 79
		{cout<< "Kategori: C"<<endl;
		cout<<"Status: Lulus";}
	else if (rata_rata<70 && rata_rata>=60)//jika rata rata nilai 60 sampai 69
		{cout<< "Kategori: D"<<endl;
		cout<<"Status: Tidak Lulus";}
	else if (rata_rata<60 && rata_rata>=50)//jika rata rata nilai 50 sampai 59
		{cout<< "Kategori: E"<<endl;
		cout<<"Status: Tidak Lulus";}
	else // jika rata rata nilai tidak memenuhi syarat diatas
		{cout<< "Kategori F"<<endl;
		cout<< "Status: Tidak Lulus";}
}
