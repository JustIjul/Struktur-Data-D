#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	queue<int> q;
	while(n--){
		int i;
		cin >> i;
		q.push(i);
	}
	int m;
	cin >> m;
	while(m-- && q.size()){
		string s;
		cin >> s;
		if(s == "BERHASIL"){
			q.pop();
		}else
		if(s == "GAGAL"){
			q.push(q.front());
			q.pop();
		}
	}
	
	if(q.size()){
		while(q.size()){
			cout << q.front() << " ";
			q.pop();
			}	
	}else{
		cout << "KOSONG";
	}
	
	return 0;
}

