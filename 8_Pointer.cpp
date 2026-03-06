#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x = 10;
	
	int* ptr = &x;
	
	cout << "Value dari variabel x : " << x << endl;
	cout << "Alamat dari variabel x : " << &x << endl;
	cout << "Value yang disimpan di variabel ptr : " << ptr << endl;
	cout << "Value yang ditunjuk oleh variabel ptr : " << *ptr << endl;
	
	return 0;
}

