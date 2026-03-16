#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	deque<long long> x;
	while(n--){
		long long i;
		cin >> i;
		x.push_back (i);
	}
	sort(x.begin(), x.end());
//	for(auto i : x)cout << i << " ";
	while(x.size() > 1){
		long long a = x.back();
		x.pop_back();
		long long b = x.back();
		x.pop_back();
		
		if(a != b){
			x.push_front(a-b);
			sort(x.begin(), x.end());
		}
	}
	
	if(x.size()==0)cout << 0;
	else cout << x[0];
	return 0;
}

