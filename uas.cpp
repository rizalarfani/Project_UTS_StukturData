#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10
using namespace std;

// #########################
// Created By : M.Rijal Arfani
// Blog : www.rizaltutorial.com

// Deklarasinkan struct
struct profile
{
	char nama[10],lg;
	int nim;
	string kelas;
	
};

//pendeklarasian struct sebuah tree awal
struct Node{
      int data;
      Node *kiri;
      Node *kanan;
};

// Deklarasinkan struct
struct STACK {
	int top;
	int data[MAX];
};

float dta;

struct QUEUE {
	int head,tail;
	int data[MAX];
};

// struct yang telah dibuat (STACK) dijadikan suatu Tipe data, dimana disebut tipe data abstrak
struct STACK stack_baru;

struct QUEUE antrian;

struct profile iden;

// Fungsi prototype
int main();

// Fungsi untuk pilhan menu program kami
int menu () {
	int menu;

	system ("cls");
	cout << "--------------------------------------------" << endl; 
	cout << "=          >>Menu Program<<                =" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "=          1.Stack                         =" << endl;
	cout << "=          2.Queue                         =" << endl;
	cout << "=          3.Binary-Tree                   =" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Silahkan pilih menu (1/3) : "; cin >> menu;
	cout << "\n";

	return menu;
}

// Fungsi untuk mengisikan identitas anda
int Input_identitas () {
	system("cls");
	cout << "Isi Identitas" << endl;
	cout << "-------------" << endl;
	cout << "Nama Anda : "; gets(iden.nama);
	cout << "Kelas anda : "; cin >> iden.kelas;
	cout << "Nim anda : "; cin >> iden.nim;
	return iden.nim;
}

// Fungsi untuk menampilkan identitas
void identitas () {
	cout << "-------------------" << endl; 
	cout << "= Nama  : " << iden.nama  << endl;
	cout << "= Kelas : " << iden.kelas << endl;
	cout << "= Nim   : " << iden.nim << endl;
	cout << "-------------------" << endl; 

	cout << "\n";
}


// Semua fungsi stack

// Fungsi boolen  untuk mengetahui apakah stack penuh??
bool Is_Full () {
	if (stack_baru.top == MAX) {
		return true;
	} else {
		return false;
	}
}

// Fungsi boolen untuk mengetahui apakah stack kosong ??
bool Is_Empety () {
	if (stack_baru.top == -1) {
		return true;
	} else {
		return false;
	}
}

// Fungsi untuk menambah kan stack baru
void Tambah_Stack () {
	
	// Cek apakah stack penuh atau tidak
	if (Is_Full() == true) {
		cout << "Stack Telah Penuh" << endl;
	} else {
		cout << "Tambah Data stack" << endl;
		cout << "------------------" << endl;
		cout << "isi data Stack : ";cin >> dta;
		stack_baru.top++;
		stack_baru.data[stack_baru.top] = dta;
			
	}
}

// Fungsi untuk ambil data stack
void Ambil_Stack () {
	// Cek apakah stack ada isinya
	if (Is_Empety() == true) {
		cout << "Maaf Stack kosong" << endl;
	} else {
		cout << "Data yang di ambil : " << stack_baru.data[stack_baru.top] << endl;
		stack_baru.top--;
	}
}
 
// Fungsi untuk menghapus data stack
void Hapus_stack () {
	stack_baru.top = -1;
	cout << "Sekarang Stack Kosong" << endl;
}

// Fungsi untuk melihat antrian
void cetak () {
	cout << "Isi dari stack anda" << endl;
	cout << "-------------------" << endl;
	for (int i = 1; i <= stack_baru.top; i++) {
		cout << stack_baru.data[i] << " ";
	}
}


// fungsi untuk algoritma stack
int stack () {
	int pilihan;
	char lg;
	system("cls");
	identitas();
	cout << "--------------------------------------------" << endl;
	cout << "=             >>Menu stack<<               =" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "=          1.Push (Tambah Antrian)         =" << endl;
	cout << "=          2.pop  (Ambil Antrian)          =" << endl;
	cout << "=          3.Cetak (Lihat Antrian)         =" << endl;
	cout << "=          4.Bersihkan stack               =" << endl;
	cout << "=          5.Menu Utama                    =" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Silahkan Pilih Menu Stack (1/5) : ";cin >> pilihan;
	cout << "\n";

	while (pilihan != 6) {
		switch(pilihan) {
			case 1:
				Tambah_Stack();
			break;
			case 2:
				Ambil_Stack();
			break;
			case 3:
				cetak();
			break;
			case 4:
				Hapus_stack();
			break;
			case 5:
				main();
			break;
			default:
				cout << "Pilihan Tidak Tersedia" << endl;
			break;
		}

		cout << "Mau coba lagi ? (y/t) : ";cin >> lg;
		cout << "\n";
		if (lg == 'y' | lg == 'Y') {
			stack();
		} else if (lg == 't' | lg == 'T') {
			cout<<"*=========================================*"<<endl;
			cout<<"*                TERIMA KASIH             *"<<endl;
			cout<<"*=========================================*"<<endl;
		break;
		}

	}
	return 0;
}

// semua fungsi untuk queue

void Create(){
   antrian.head=antrian.tail=-1;
}
// Fungsi untuk cek apakah antrian kosong
int IsEmpty(){
   if(antrian.tail == -1) {
       return 1;
   } else {
       return 0;
   }
}
// fungsi untuk cek apakah antrian sudah penuh
int IsFull(){
    if(antrian.tail == MAX) {
        return 1;
    } else {
        return 0;
    }
}
// Fungsi untuk menambahkan antrian
void Enquee (int n) {
	// Cek dahulu apakah antrian sudah penuh??
	if (IsFull () == true) {
		cout << "Maaf Antrian Sudah penuh" << endl;
		antrian.head = antrian.tail = 0;
	} else {
		antrian.tail++;
		antrian.data[antrian.tail] = n;
		cout << "Data berhasil di tambahkan" << endl;
		cout << "\n";
	}
}

// Fungsi untuk mengambil antrian
int Dequeue()
{
    // Cek terlebih dahulu apakah data kosong
    if (IsEmpty () == 1) {
    	cout << "Maaf Data antrian kosong" << endl;
    } else {
    	for (int i = antrian.head; i <= antrian.tail; i++) {
    		antrian.data[i] = antrian.data[i+1];
    	} 
    	antrian.tail--;
    	cout << "Antrian yang di ambil : " << antrian.data[antrian.head] << endl;
    }
    return false;
}

// Fungsi untuk hapus antrian
void Clear()
{
    antrian.head=antrian.tail=-1;
    cout << "Hapus antrian berhasil" << endl;
}

// Fungsi untuk tampilkan antrian
void Tampil()
{
    // cek dahulu apakah antrianya Full jika Full kasih pesan antrian Full
	if (IsEmpty () == true ) {
		cout << "Maaf antrian saat ini kosong" << endl;
	} else {
		for (int i = 1; i <= antrian.tail; i++){
			cout << antrian.data[i] << " ";
		}
		cout << "\n";
	} 
}

int queue () {
	int pilihan,n;
	char lg;
	// Create();
	system("cls");
	identitas();
	cout << "--------------------------------------------" << endl;
	cout << "=             >>Menu Queue<<               =" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "=          1.Enqueue (Tambah Antrian)      =" << endl;
	cout << "=          2.Dequeue (Ambil Antrian)       =" << endl;
	cout << "=          3.Cetak (Lihat antrian)         =" << endl;
	cout << "=          4.Bersihkan stack               =" << endl;
	cout << "=          5.Menu Utama                    =" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Silahkan Pilih Menu Stack (1/5) : ";cin >> pilihan;
	cout << "\n";

	while (pilihan != 6) {
		switch (pilihan) {
			case 1:
				cout << "Silahkan isi data : ";cin >> n;
                Enquee(n);
			break;
			case 2:
				Dequeue();
			break;
			case 3:
				Tampil();
			break;
			case 4:
				Clear();
			break;
			case 5:
				main();
			break;
			default :
				cout << "Maaf pilihan tidak tersedia" << endl;
			break;
		}

		cout << "\n";
		
		cout << "Mau coba lagi ? (y/t) : ";cin >> lg;
		cout << "\n";
		if (lg == 'y' | lg == 'Y') {
			queue();
		} else if (lg == 't' | lg == 'T') {
			cout<<"*=========================================*"<<endl;
			cout<<"*                TERIMA KASIH             *"<<endl;
			cout<<"*=========================================*"<<endl;
			break;
		}

	}
	return 0;
} 


// Fungsi semua untuk Binary Tree
void tambah(Node **root, int databaru)
{
      //jika root masih kosong
      if((*root) == NULL)
      {
            //pembuatan node baru
            Node *baru;
            //pengalokasian memori dari node yang telah dibuat
            baru = new Node;
            //inisialisasi awal node yang baru dibuat
            baru->data = databaru;
            baru->kiri = NULL;
            baru->kanan = NULL;
            (*root) = baru;
            (*root)->kiri = NULL;
            (*root)->kanan = NULL;
            printf("Data bertambah!");
      }
     //jika data yang akan dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri.
      else if(databaru<(*root)->data)
            tambah(&(*root)->kiri, databaru);
     //jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan
      else if(databaru>(*root)->data)
            tambah(&(*root)->kanan, databaru);
     //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
      else if(databaru == (*root)->data)
            printf("Data sudah ada!");
}


//fungsi yang digunakan untuk mencetak tree secara preOrder
void preOrder(Node *root)
{
      if(root != NULL){
            printf("%d ", root->data);
            preOrder(root->kiri);
            preOrder(root->kanan);
      }
}

//fungsi yang digunakan untuk mencetak tree secara inOrder
void inOrder(Node *root)
{
      if(root != NULL){
            inOrder(root->kiri);
            printf("%d ", root->data);
            inOrder(root->kanan);
      }
}

//fungsi yang digunakan untuk mencetak tree secara postOrder
void postOrder(Node *root)
{
      if(root != NULL){
            postOrder(root->kiri);
            postOrder(root->kanan);
            printf("%d ", root->data);
      }
}

int binary_tree () {
	//deklarasikan variabel
      int pil, data;// c;
      Node *pohon; //*t;
      pohon = NULL; //inisialisasi node pohon
      //perulangan do-while
      do
      {
            system("cls"); //bersihkan layar
            printf("\t#PROGRAM TREE C++#");
            printf("\n\t==================");
            printf("\nMENU");
            printf("\n----\n");
            printf("1. Tambah\n");
            printf("2. Lihat pre-order\n");
            printf("3. Lihat in-order\n");
            printf("4. Lihat post-order\n");
            printf("5. Exit\n");
            printf("Pilihan : ");
            scanf("%d", &pil);
            switch(pil)
            {
            //jika pil bernilai 1
            case 1 :
                  printf("\nINPUT : ");
                  printf("\n-------");
                  printf("\nData baru : ");
                  scanf("%d", &data);
                  //panggil fungsi untuk menambah node yang berisi data pada tree
                  tambah(&pohon, data);
                  break;
                 
            //jika pil bernilai 2
            case 2 :
                  printf("\nOUTPUT PRE ORDER : ");
                  printf("\n------------------\n");
                  if(pohon!=NULL)
                       //panggil fungsi untuk mencetak data secara preOrder
                        preOrder(pohon);
                  else
                        printf("Masih kosong!");
                  break;
                 
            //jika pil bernilai 3
            case 3 :
                  printf("\nOUTPUT IN ORDER : ");
                  printf("\n------------------\n");
                  if(pohon!=NULL)
                       //panggil fungsi untuk mencetak data secara inOrder
                        inOrder(pohon);
                  else
                        printf("Masih kosong!");
                  break;
           
            //jika pil bernilai 4
            case 4 :
                  printf("\nOUTPUT POST ORDER : ");
                  printf("\n------------------\n");
                  if(pohon!=NULL)
                       //panggil fungsi untuk mencetak data secara postOrder
                        postOrder(pohon);
                  else
                        printf("Masih kosong!");
                  break;
            }
            _getch();
      }while(pil != 5); //akan diulang jika input tidak samadengan 5
      return EXIT_FAILURE;
}


int main()
{	

	if (iden.nim == 0) {
		Input_identitas();		
	}

	int pilih = menu();		
	char lg;
	
	while(pilih != 4) {
		switch(pilih) {
			case 1:
				stack();
			break;
			case 2:
				queue();
			break;
			case 3:
				binary_tree();
			break;
			default:
				cout << "Maaf yang anda pilih tidak ada" << endl;
			break;
		}

		if (! (cin >> pilih )){
			cin.clear();
			cout << "Harap masukan Nomor (1/5)." << endl;
		}

		cout << "Mau coba lagi (y/t) : "; cin >> lg;
		cout << "\n";
		if (lg == 'y' | lg == 'Y') {
			pilih = menu();
		} else if (lg =='t' | lg == 'T') {
			cout<<"*=========================================*"<<endl;
			cout<<"*                TERIMA KASIH             *"<<endl;
			cout<<"*=========================================*"<<endl;
			break;
		}

	}
	
	getch();
	return false;
}
