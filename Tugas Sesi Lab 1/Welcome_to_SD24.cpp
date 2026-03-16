#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	vector<int> v;
	
	while(t--){
		int n, x, y;
		cin >> n;
		if(n == 1){
			cin >> x;
			v.push_back(x);
		}else
		if(n == 2){
			cin >> x;
			for(int i = 0; i < v.size(); i++){
				v[i] += x;
			}
		}else
		if(n == 3){
			if(v.size())v.pop_back();
			else cout << "kosong woe" << endl;
		}else
		if(n == 4){
			if(v.size()){
				for(int i : v) cout << i << " ";
			cout << endl; 
			}else{
				cout << "gaada isinya :(" << endl;
			}
		}else
		if(n == 5){
			cin >> y >> x;
			v.insert(v.begin() + y, x);
		}
	}
	return 0;
}

