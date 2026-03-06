#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n = 1, i, j;
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			cout << n << " ";
			n++;
		}
		cout << endl;
	}
	
	return 0;
	
}

