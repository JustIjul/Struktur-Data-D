#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cout << "Inputkan jumlah mahasiswa: ";
	cin >> n;

	int nilaiMahasiswa[n], max;
	for(int i = 0; i < n; i++){
		cout << "Masukkan nilai mahasiswa ke-" << i+1 << ": ";
		cin >> nilaiMahasiswa[i];
		if(i==0)max=nilaiMahasiswa[i];
		if(max<nilaiMahasiswa[i])max=nilaiMahasiswa[i];
	}

	cout << "Nilai tertinggi: " << max << endl;
	
	return 0;
}

