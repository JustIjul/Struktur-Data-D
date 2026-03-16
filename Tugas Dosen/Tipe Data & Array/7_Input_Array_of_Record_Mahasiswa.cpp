#include <bits/stdc++.h>

using namespace std;

struct mahasiswa {
	string nama, nrp, jurusan;
	int umur;
	string hobi[2];
};

int main(){

	int n;
	cout << "Inputkan jumlah mahasiswa: ";
	cin >> n;

	mahasiswa mhs[n];
	for(int i = 0; i < n; i++){
		cout << "Data mahasiswa ke-" << i+1 << ": " << endl;
		cout << "Nama: ";
		cin >> mhs[i].nama;
		cout << "Nrp: ";
		cin >> mhs[i].nrp;
		cout << "Jurusan: ";
		cin >> mhs[i].jurusan;
		cout << "Umur: ";
		cin >> mhs[i].umur;
		cout << "Masukkan hobi: " << endl;
		for(int j = 0; j < 2; j++){
			cout << "-> Hobi ke-" << j+1 << ": ";
			cin >> mhs[i].hobi[j];
		}
	}

	for(int i = 0; i < n; i++){
		cout << "########## Data Mahasiswa ke-" << i+1 << " ##########" << endl;
		cout << "Nama    : " << mhs[i].nama << endl;
		cout << "Nrp     : " << mhs[i].nrp << endl;
		cout << "Jurusan : " << mhs[i].jurusan << endl;
		cout << "Umur    : " << mhs[i].umur << endl;
		cout << "Hobi    : " << mhs[i].hobi[0] << " dan " << mhs[i].hobi[1] << endl;
	}

	return 0;
}

