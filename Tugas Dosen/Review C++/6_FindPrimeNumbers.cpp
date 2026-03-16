#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	
	if(n <= 1)
		return false;
		
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}
	
	return true;
}

void findPrimes(int x, int y){
	
	bool found = false;
	
	for(int i = x; i <= y; i++){
		if(isPrime(i)){
			cout << i << " ";
			found = true;
		}
	}
	
	if(!found)
		cout << "Tidak ada bilangan prima di rentang " << x << " dan " << y << ".";
}

int main(){
	
	int x = 10, y = 30;
	
	findPrimes(x, y);
	
	return 0;
}

