#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, total = 0;
	cout << "Inputkan jumlah mahasiswa: ";
	cin >> n;

	int nilaiMahasiswa[n];
	for(int i = 0; i < n; i++){
		cout << "Masukkan nilai mahasiswa ke-" << i+1 << ": ";
		cin >> nilaiMahasiswa[i];
		total += nilaiMahasiswa[i];
	}

	cout << "Total nilai: " << total << endl;
	cout << "Jumlah mahasiswa: " << n << endl;
	cout << "Rata-rata nilai mahasiswa: " << total/((float)n) << endl;

	return 0;
}

