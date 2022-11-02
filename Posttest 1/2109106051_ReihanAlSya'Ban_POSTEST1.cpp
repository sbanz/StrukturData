#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

//DEKLARASI STRUCT
struct tim_liga{
	int nomor_tim;
	string nama_tim;
	string kota_asal;
	string nama_stadion;
	string suporter;
	int jumlah_pemain;
};

int sizee;
tim_liga timliga;
tim_liga* ptrtim_liga = &timliga;
tim_liga liga[100];

void create()
{
	int banyaktim, banyakdata;
	cout<<"Masukkan berapa banyak data Tim yang ingin ditambah : ";
	cin>>banyaktim;
	cout<<"\n";
	banyakdata = 0;
	banyakdata = sizee + 1;
	cout<<"Nomor TIM : "<<banyaktim<<endl;
	liga[sizee].nomor_tim = banyaktim;
	cout<<"Nama TIM : ";
	cin>>ptrtim_liga->nama_tim;
	cout<<"Kota Asal : ";
	cin>>ptrtim_liga->kota_asal;
	cout<<"Nama Stadion : ";
	cin>>ptrtim_liga->nama_stadion;
	cout<<"Nama Suporter : ";
	cin>>ptrtim_liga->suporter;
	cout<<"Jumlah Pemain : ";
	cin>>ptrtim_liga->jumlah_pemain;
	cout<<"\n";
	liga[sizee] = timliga;
	sizee++;
	
	cout<<"DATA BERHASIL DITAMBAHKAN\n";
	cout<<"\n";
	cout<<"TEKAN ENTER UNTUK KEMBALI KE MENU AWAL";
	getch();
	system("cls");
}

void read()
{
	cout<<"DATA TIM\n";
	int nomor;
	for(int indeks=0; indeks<sizee ; indeks++)
	{
		tim_liga timliga = liga[indeks];
		tim_liga* ptrtim_liga = &timliga;
		
		nomor = indeks + 1;
		cout<<"Nomor TIM "<<nomor<<endl;
		cout<<"Nama TIM : "<<ptrtim_liga->nama_tim<<endl;
		cout<<"Kota Asal : "<<ptrtim_liga->kota_asal<<endl;
		cout<<"Nama Stadion : "<<ptrtim_liga->nama_stadion<<endl;
		cout<<"Nama Suporter : "<<ptrtim_liga->suporter<<endl;
		cout<<"Jumlah Pemain : "<<ptrtim_liga->jumlah_pemain<<endl;
		cout<<"\n";
	}
	cout<<"TEKAN ENTER UNTUK KEMBALI KE MENU AWAL";
	cout<<"\n";
	getch();
	system("cls");
}

void update(){
	cout<<"DATA TIM\n";
	int nomor;
	for(int indeks=0; indeks<sizee ; indeks++)
	{
		tim_liga timliga = liga[indeks];
		tim_liga* ptrtim_liga = &timliga;
		
		nomor = indeks + 1;
		cout<<"Nomor TIM "<<nomor<<endl;
		cout<<"Nama TIM : "<<ptrtim_liga->nama_tim<<endl;
		cout<<"Kota Asal : "<<ptrtim_liga->kota_asal<<endl;
		cout<<"Nama Stadion : "<<ptrtim_liga->nama_stadion<<endl;
		cout<<"Nama Suporter : "<<ptrtim_liga->suporter<<endl;
		cout<<"Jumlah Pemain : "<<ptrtim_liga->jumlah_pemain<<endl;
		cout<<"\n";
	}
	int ubah;
	int indeks;
	cout<<"Masukkan Nomor TIM yang ingin diubah : ";
	cin>>ubah;
	indeks = ubah - 1;
	cout<<"Nomor TIM : ";
	cin>>ptrtim_liga->nomor_tim;
	cout<<"Nama TIM : ";
	cin>>ptrtim_liga->nama_tim;
	cout<<"Kota Asal : ";
	cin>>ptrtim_liga->kota_asal;
	cout<<"Nama Stadion : ";
	cin>>ptrtim_liga->nama_stadion;
	cout<<"Nama Suporter : ";
	cin>>ptrtim_liga->suporter;
	cout<<"Jumlah Pemain : ";
	cin>>ptrtim_liga->jumlah_pemain;
	cout<<"\n";
	
	liga[indeks] = timliga;
	cout<<"Data Berhasil Diubah !!!"<<endl;
	cout<<"\n";
	cout<<"TEKAN ENTER UNTUK KEMBALI KE MENU AWAL";
	getch();
	system("cls");
}

void deletee(){
	cout<<"DATA TIM\n";
	int nomor;
	for(int indeks=0; indeks<sizee ; indeks++)
	{
		nomor = indeks + 1;
		cout<<"Nomor TIM "<<nomor<<endl;
		cout<<"Nama TIM : "<<ptrtim_liga->nama_tim<<endl;
		cout<<"Kota Asal : "<<ptrtim_liga->kota_asal<<endl;
		cout<<"Nama Stadion : "<<ptrtim_liga->nama_stadion<<endl;
		cout<<"Nama Suporter : "<<ptrtim_liga->suporter<<endl;
		cout<<"Jumlah Pemain : "<<ptrtim_liga->jumlah_pemain<<endl;
		cout<<"\n";
	}
	
	int hapus, indeks;
	cout<<"Nomor TIM yang ingin dihapus : ";
	cin>>hapus;
	indeks = hapus - 1;
	sizee--;
	for(int z=indeks; z<sizee; z++){
		liga[z].nama_tim = liga[z+1].nama_tim;
		liga[z].kota_asal = liga[z+1].kota_asal;
		liga[z].nama_stadion = liga[z+1].nama_stadion;
		liga[z].suporter = liga[z+1].suporter;
		liga[z].jumlah_pemain = liga[z+1].jumlah_pemain;
	}
	cout<<"DATA TELAH TERHAPUS\n";
	cout<<"\n";
	cout<<"TEKAN ENTER UNTUK KEMBALI KE MENU AWAL";
	getch();
	system("cls");
}

int main()
{
	int pilih;
	start:
	cout<<"\n";
	cout<<"=================== MENU UTAMA ====================\n"
		<<"==== PENDATAAN TIM LIGA SEPAK POCHINKI ULU CUP ====\n"
		<<"\n"
		<<"1. Masukkan Data TIM\n"
		<<"2. Lihat Data TIM\n"
		<<"3. Ubah Data TIM\n"
		<<"4. Hapus Data TIM\n"
		<<"5. Keluar\n"
		<<"\n"
		<<"Masukkan Pilihan : ";
	cin>>pilih;
	cout<<"\n";
	if(pilih == 1){
		create();
		goto start;
	}
	if(pilih == 2){
		read();
		goto start;
	}
	if(pilih == 3){
		update();
		goto start;
	}
	if(pilih == 4){
		deletee();
		goto start;
	}
	if(pilih == 5){
		cout<<"TERIMA KASIH";
	}
	else{
		cout<<"PILIH SESUAI MENU !!!\n";
		goto start;
	}
}
