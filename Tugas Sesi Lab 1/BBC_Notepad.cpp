#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<char> note;
	string cmd;
	while(cin >> cmd){
		if(cmd == "WRITE"){
			char c;
			cin >> c;
			note.push_back(c);
		}
		else if(cmd == "BACKSPACE"){
			note.pop_back();
		}
		else if(cmd == "PRINT") break;
	}
	for(char i : note){
		cout << i;
	}
	return 0;
}
