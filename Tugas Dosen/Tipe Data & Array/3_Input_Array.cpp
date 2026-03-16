#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cout << "Inputkan jumlah mahasiswa: ";
	cin >> n;

	int nilaiMahasiswa[n];
	for(int i = 0; i < n; i++){
		cout << "Masukkan nilai mahasiswa ke-" << i+1 << ": ";
		cin >> nilaiMahasiswa[i];
	}

	cout << "Nilai Mahasiswa: " << endl;
	for(int i = 0; i < n; i++){
		cout << "Mahasiswa ke-" << i+1 << ": " << nilaiMahasiswa[i] << endl;
	}


	return 0;
}

