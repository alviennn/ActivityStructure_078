#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs, mhs2;

	mhs.nim = "20220140078";
	mhs.umur = 18;
	mhs.nama = "Alvien Ridho";
	mhs.alamat = "Banjarmasin";

	cout << "Masukkan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukkan Umur : ";
	cin >> mhs2.umur;
	cout << "Masukkan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan Alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;

	cout << "NIM : " << mhs2.nim;
	cout << "\nUmur : " << mhs2.umur;
	cout << "\nNama : " << mhs2.nama;
	cout << "\nAlamat : " << mhs2.alamat;
}