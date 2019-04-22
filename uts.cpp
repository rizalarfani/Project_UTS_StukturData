#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int data[50],data2[50];
int n;

int getOption () 
{
	int menu;

	system ("cls");
	cout << "============================================" << endl;
	cout << "=       Selamat Datang di progam kami      =" << endl;
	cout << "=              By Rijal Arfani             =" << endl;
	cout << "============================================" << endl;

	cout << "\n";

	cout << "============================================" << endl;
	cout << "=          Menu Progam Kami!!!             =" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "=          1.Buble Sort                    =" << endl;
	cout << "=          2.Selectio sort                 =" << endl;
	cout << "=          3.Selesai                       ="<< endl;
	cout << "============================================" << endl;

	cout << "Silahkan pilih menu (1/2) : "; cin >> menu;
	cin.ignore(1,'\n');
	cout << "\n";

	return menu;
}

int asc_dsc() {
	int mn;
	int cek;

	system ("cls");
	if (cek == 1) {
		cout << "================================" << endl;
		cout << "=      Progam Buble Sort       =" << endl;
		cout << "================================" << endl;
		cout << "\n";
		cout << "1.ASCENDING (Terkecil ke besar)" << endl;
		cout << "2.DESCENDING (Terbesar ke kecil)" << endl;
		cout << "\n";
	} else if (cek == 2) {
		cout << "================================" << endl;
		cout << "=    Progam Selection Sort     =" << endl;
		cout << "================================" << endl;
		cout << "\n";
		cout << "1.ASCENDING (Terkecil ke besar)" << endl;
		cout << "2.DESCENDING (Terbesar ke kecil)" << endl;
		cout << "\n";
	} else {
		cout << "Maaf yang anda pilih tidak ada" << endl;
	}

	cout << "\n";
	cout << "Pilih mana (1/2) : "; cin >> mn;
	return mn;
}

void identitas () {
	cout << "============================" << endl;
	cout << "= Nama  : M.Rijal Arfani   =" << endl;
	cout << "= Kelas : 2 A              =" << endl;
	cout << "= Nim   : 18040004         =" << endl;
	cout << "============================" << endl;

	cout << "\n";

}

void tukar(int a,int b) {
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void tampil()
{
	for(int i=0;i<n;i++) {
		cout<<data[i]<<" ";
	}

	cout<<endl;
}

int bublesortAcs () {
	
	system("cls");
	identitas();
	cout << "Progam Buble Sort ASCENDING" << endl;
	cout << "\n";
	cout << "Masukan Jumlah Data : "; cin >> n;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Masukan Data Ke " << (1+i) << " = "; cin >> data[i];
		data2[i] = data[i];
	}
	cout << "=================================" << endl;
	cout << "=      Proses Buble Sort        =" << endl;
	cout << "=================================" << endl;

	cout << "sebelum di sorting" << endl;
	// tampil
	tampil();
	cout << "=========================" << endl;

	// Proses Buble sort nya
	for (int i = 1; i < n; i++) {
		for (int j = n-1; j >= i; j--) {
			if (data[j] < data[j-1]) {
				tukar(j,j-1);	
			}

			cout << "Langkah ke " << (i+1) << "" << endl;
			cout << "==============" << endl;

			for (int x = 0; x < n; x++) {
				cout << data[x] << " ";
			}
			cout << "\n";	
		}
	}

	cout << "Setelah Di Sorting" << endl;
	tampil();

	cout << "\n";

	return false;
}

int bublesortDsc () {
	system("cls");
	identitas();
	cout << "Progam Buble Sort DESCENDING" << endl;
	cout << "Masukan Jumlah Data : "; cin >> n;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Masukan Data Ke " << (1+i) << " = "; cin >> data[i];
		data2[i] = data[i];
	}

	cout << "=================================" << endl;
	cout << "=      Proses Buble Sort        =" << endl;
	cout << "=================================" << endl;

	cout << "sebelum di sorting" << endl;
	// tampil
	tampil();
	cout << "=========================" << endl;

	// Proses Buble sort nya
	for (int i = 1; i < n; i++) {
		for (int j = n-1; j >= i; j--) {
			if (data[j] > data[j-1]) {
				tukar(j,j-1);
			}

			cout << "Langkah ke " << (i+1) << "" << endl;
			cout << "=====================" << endl;

			for (int x = 0; x < n; x++) {
				cout << data[x] << " ";
			}
			cout << "\n";
		}

	}

	cout << "Setelah Di Sorting" << endl;
	tampil();


	cout <<"\n";

	return 0;
}

int selectioSortAsc () {
	int nilai[50];
	int n,i,j,x,pos,tampung;

	system("cls");
	identitas();
	cout << "\n";
	cout << "Progam Selection Sort ASCENDING" << endl;
	cout << "\n";
	cout << "Masukan banyak Data : "; cin >> n;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Nilai ke " << (1+i) << " : "; cin >> nilai[i];
	}

	cout << "\n";

	// Data sebelum di sorting
	cout << "Data Sebelum Di Sorting" << endl;
	cout << "========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << nilai[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < n-1; ++i) {
		pos = i;
		for (int j = i+1; j < n; ++j) {
			if (nilai[j] < nilai[pos]) {
				pos = j;
			}
		}
		if (pos !=i) {
			tampung = nilai[pos];
			nilai[pos] = nilai[i];
			nilai[i] = tampung;
		}

		cout << "Langkah ke " << (1+i) << "" << endl;
		cout << "================" << endl;

		for (int x = 0; x < n; ++x) {
			cout << nilai[x] << " ";
		}
		cout << "\n";
	}

	cout << "Setelah Di sorting" << endl;
	cout << "===================" << endl;

	for (int i = 0; i<n; ++i) {
		cout << nilai[i] << " ";
	}

	cout << "\n";
	return false;
}

int selectioSortDsc () {
	int nilai[30];
	int n,i,j,x,pos,tampung;

	system("cls");
	identitas();
	cout << "\n";
	cout << "Progam Selection Sort DESCANDING" << endl;
	cout << "\n";
	cout << "Masukan banyak Data : "; cin >> n;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Nilai ke " << (1+i) << " : "; cin >> nilai[i];
	}

	cout << "\n";

	// Data sebelum di sorting
	cout << "Data Sebelum Di Sorting" << endl;
	cout << "========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << nilai[i] << " ";
	}
	cout << "\n";

	// Proses selection sort
	for (int i = 0; i < n-1; ++i) {
		pos = i;
		for (int j = i+1; j < n; ++j) {
			if (nilai[j] > nilai[pos]) {
				pos = j;
			}
		}
		if (pos !=i) {
			tampung = nilai[pos];
			nilai[pos] = nilai[i];
			nilai[i] = tampung;
		}

		cout << "Langkag ke " << (1+i) << "" << endl;
		cout << "================" << endl;

		for (int x = 0; x < n; ++x) {
			cout << nilai[x] << " ";
		}
		cout << "\n";
	}

	cout << "Setelah Di sorting" << endl;
	cout << "===================" << endl;

	for (int i = 0; i<n; ++i) {
		cout << nilai[i] << " ";
	}

	cout << "\n";



	return 0;
}



int main()
{
	int pilihan = getOption();
	int plh = asc_dsc();
	char lg;

	while(pilihan != 3) {
		switch(pilihan) {
		case 1:
			if (plh == 1) {
				bublesortAcs();
			} else if (plh == 2) {
				bublesortDsc();
			} else {
				cout << "Maaf pilhan anda tidak ada" << endl;
			}
		break;	
		case 2:
			if (plh == 1) {
				selectioSortAsc();
			} else if (plh == 2) {
				selectioSortDsc();
			} else {
				cout << "Maaf pilhan anda tidak ada" << endl;
			}
		break;
		case 3:
			cout << "Terimahkasid Dadah" << endl;
		break;
		default :
			cout << "Yang ada pilih tidak ada" << endl;
		break;

		}

		kesini:
		cout << "Mau coba lagi (y/t) ? : "; cin >> lg;
		cout << "\n";

		if (lg == 'y') {
			pilihan = getOption();
			plh = asc_dsc();
		} else if  (lg == 't') {
			cout<<"*=========================================*"<<endl;
			cout<<"*                TERIMA KASIH             *"<<endl;
			cout<<"*=========================================*"<<endl;
			break;
		} else {
			goto kesini;
		}

	}

	
	getch();
	return false;
}
