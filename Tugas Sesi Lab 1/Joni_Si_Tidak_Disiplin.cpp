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
		antrean.push(todolist);
	}
	
	int lastPriority = -1;
	
	while(!antrean.empty()){
		todo now = antrean.top();
		antrean.pop();
		
		if(now.priority != lastPriority){
			cout << now.nama << endl;
			lastPriority = now.priority;
		}
	}
	
	return 0;
}
