#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	priority_queue<long long> x;
	while(n--){
		long long i;
		cin >> i;
		x.push(i);
	}
	
	while(x.size() > 1){
		long long a = x.top();
		x.pop();
		long long b = x.top();
		x.pop();
		
		if(a != b){
			x.push(a-b);
		}
	}
	
	if(x.size()==0)cout << 0;
	else cout << x.top();

	return 0;
}

