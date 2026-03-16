#include <bits/stdc++.h>

using namespace std;

int main(){

	int myArr[] = {2, 4, 6, 8, 10};
	for (int i = 0; i < 5; i++){
		cout << "Array ke-" << i << ": "<< endl << "Value: "<< myArr[i] << endl << "Alamat: " << &myArr[i] << endl;
	}

	return 0;
}

