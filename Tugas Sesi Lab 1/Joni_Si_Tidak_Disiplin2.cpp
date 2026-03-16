#include <bits/stdc++.h>

using namespace std;

struct todo{
	int priority;
	string nama;
};

struct pembanding{
	bool operator()(const todo& a, const todo& b){
		if(a.priority != b.priority){
			return a.priority < b.priority;
		}
		return a.nama < b.nama;
	}
};

int main(){
	int t;
	cin >> t;
	
	priority_queue<todo, vector<todo>, pembanding> antrean;
	
	while(t--){
		todo todolist;
		cin >> todolist.priority;
		cin.ignore();
		getline(cin, todolist.nama);
		if(todolist.nama.find("seru-seruan") == string::npos) antrean.push(todolist);
	}
	
	while(!antrean.empty()){
		todo now = antrean.top();
		antrean.pop();
		cout << now.nama << endl;
	}
	
	return 0;
}
