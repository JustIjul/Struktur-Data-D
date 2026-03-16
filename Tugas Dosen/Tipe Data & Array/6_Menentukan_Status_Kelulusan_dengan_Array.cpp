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

	int nilaiMinimum = 75;
	for(int i = 0; i < n; i++){
		cout << "Status kelulusan mahasiswa ke-" << i+1 << ": ";
		if(nilaiMahasiswa[i] >= nilaiMinimum) cout << "Lulus" << endl;
		else cout << "Tidak Lulus" << endl;
	}

	return 0;
}

